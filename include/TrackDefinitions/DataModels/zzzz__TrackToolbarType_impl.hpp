#pragma once
#include "TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
constexpr void TrackDefinitions::DataModels::TrackToolbarType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TrackDefinitions::DataModels::TrackToolbarType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TrackDefinitions::DataModels::TrackToolbarType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::DataModels::TrackToolbarType::TrackToolbarType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TrackDefinitions::DataModels::TrackToolbarType  TrackDefinitions::DataModels::TrackToolbarType::None{static_cast<int32_t>(0xffffffff)};
constexpr ::TrackDefinitions::DataModels::TrackToolbarType  TrackDefinitions::DataModels::TrackToolbarType::Lights{static_cast<int32_t>(0x0)};
constexpr ::TrackDefinitions::DataModels::TrackToolbarType  TrackDefinitions::DataModels::TrackToolbarType::Toggle{static_cast<int32_t>(0x1)};
constexpr ::TrackDefinitions::DataModels::TrackToolbarType  TrackDefinitions::DataModels::TrackToolbarType::FloatValue{static_cast<int32_t>(0x3)};
constexpr ::TrackDefinitions::DataModels::TrackToolbarType  TrackDefinitions::DataModels::TrackToolbarType::IntValue{static_cast<int32_t>(0x4)};
constexpr ::TrackDefinitions::DataModels::TrackToolbarType  TrackDefinitions::DataModels::TrackToolbarType::BtsCharacterSelection{static_cast<int32_t>(0x5)};
constexpr ::TrackDefinitions::DataModels::TrackToolbarType  TrackDefinitions::DataModels::TrackToolbarType::CarSelection{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
