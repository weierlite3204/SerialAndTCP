#ifndef SENSORDATA_H
#define SENSORDATA_H

struct SensorData {
    double atemp;    // 空气温度
    double ahumi;    // 空气湿度
    double oxygen;   // 氧气含量
    double stemp;    // 土壤温度
    double shumi2;   // 土壤湿度
    double light;    // 光照强度

    //添加默认构造函数，初始化成员（避免未初始化的随机值）
    SensorData() : atemp(0), ahumi(0), oxygen(0), stemp(0), shumi2(0), light(0) {}
};

#endif // SENSORDATA_H
