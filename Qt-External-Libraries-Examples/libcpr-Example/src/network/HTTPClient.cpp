#include "HTTPClient.h"

/*#include <curl/curl.h>
#include <curl/urlapi.h>*/

/*#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>*/

#include <cpr/cpr.h>

#include <QDebug>
#include <QThread>

namespace Network {

HTTPClient::HTTPClient(QObject* parent) :
    AbstractHTTPClient(parent)
{

}

HTTPClient::~HTTPClient()
{

}

auto HTTPClient::getServerCurrentTime() -> void //QString
{
    /*std::string response;
    CURL* handle;

    handle = curl_easy_init();

    curl_easy_setopt(handle, CURLOPT_URL, "http://127.0.0.1:8000/time");
    curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, &getUrlResponse);
    curl_easy_setopt(handle, CURLOPT_WRITEDATA, &response);

    curl_easy_perform(handle);
    curl_easy_cleanup(handle);

    return response.c_str();*/

    qDebug() << "Worker" << QThread::currentThreadId();

    cpr::Response r = cpr::Get(cpr::Url{"http://127.0.0.1:8000/time"},
                               cpr::Authentication{"user", "pass", cpr::AuthMode::BASIC},
                               cpr::Parameters{{"anon", "true"}, {"key", "value"}});
    qDebug() << r.status_code;                  // 200
    qDebug() << r.header["content-type"];       // application/json; charset=utf-8
    qDebug() << r.text;                         // JSON text string
    //return "200"; //QString::fromStdString(r.text);

    emit serverCurrentTime("200");
}

auto HTTPClient::getServerUserList() -> QString
{
    /*std::string response;
    CURL* curl;
    CURLcode res;

    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://127.0.0.1:8000/users");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &getUrlResponse);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        curl_easy_perform(curl);

        res = curl_easy_perform(curl);

        if (res != CURLE_OK)
            return QString("http://127.0.0.1:8000/users error: %1").arg(curl_easy_strerror(res));

        curl_easy_cleanup(curl);

        QJsonDocument doc = QJsonDocument::fromJson(QString(response.c_str()).toUtf8());

        return doc.toJson();
    }

    return QString("Curl doesn't work");*/

    return "";
}

auto HTTPClient::postServerSendNewUser() -> QString
{
    /*std::string response;
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (curl) {
        const char* data = "data to send";

        curl_easy_setopt(curl, CURLOPT_URL, "http://127.0.0.1:8000/users?name=John&sex=man&age=19");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &getUrlResponse);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_setopt(curl, CURLOPT_POST, 1);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data); // data in body

        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (res != CURLE_OK) {
            return QString("http://127.0.0.1:8000/users?name=John&sex=man&age=19 error: %1").arg(curl_easy_strerror(res));
        } else {
            return response.c_str();
        }
    }

    return QString("Curl doesn't work");*/
    return "";
}

auto HTTPClient::deleteServerFirstUser() -> QString
{
    /*std::string response;
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (curl) {
        const char* data = "data to send";

        curl_easy_setopt(curl, CURLOPT_URL, "http://127.0.0.1:8000/users/0");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &getUrlResponse);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "DELETE");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data); // data in body

        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (res != CURLE_OK) {
            return QString("http://127.0.0.1:8000/users/0 error: %1").arg(curl_easy_strerror(res));
        } else {
            return response.c_str();
        }
    }

    return QString("Curl doesn't work");*/

    return "";
}

} // namespace Network
