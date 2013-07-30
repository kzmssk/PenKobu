// -*- C++ -*-
/*!
 * @file  Penkobu.cpp
 * @brief create root for Kobuki by Drawing
 * @date $Date$
 *
 * $Id$
 */

#include "Penkobu.h"

// Module specification
// <rtc-template block="module_spec">
static const char* penkobu_spec[] =
  {
    "implementation_id", "Penkobu",
    "type_name",         "Penkobu",
    "description",       "create root for Kobuki by Drawing",
    "version",           "1.0.0",
    "vendor",            "Group1 in RTC Summer Camp 2013",
    "category",          "Kobuk",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    "conf.default.mode", "0",
    // Widget
    "conf.__widget__.mode", "text",
    // Constraints
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
Penkobu::Penkobu(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_penPositionIn("penPosition", m_penPosition),
    m_penPressureIn("penPressure", m_penPressure),
    m_cameraIn("camera", m_camera)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
Penkobu::~Penkobu()
{
}



RTC::ReturnCode_t Penkobu::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("penPosition", m_penPositionIn);
  addInPort("penPressure", m_penPressureIn);
  addInPort("camera", m_cameraIn);
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable
  bindParameter("mode", m_mode, "0");
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t Penkobu::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t Penkobu::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t Penkobu::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t Penkobu::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t Penkobu::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t Penkobu::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t Penkobu::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t Penkobu::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t Penkobu::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t Penkobu::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t Penkobu::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void PenkobuInit(RTC::Manager* manager)
  {
    coil::Properties profile(penkobu_spec);
    manager->registerFactory(profile,
                             RTC::Create<Penkobu>,
                             RTC::Delete<Penkobu>);
  }
  
};


