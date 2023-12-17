#pragma once
#include "TrackDefinitions/DataModels/zzzz__EventBoxGroupType_def.hpp"
constexpr void TrackDefinitions::DataModels::EventBoxGroupType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TrackDefinitions::DataModels::EventBoxGroupType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TrackDefinitions::DataModels::EventBoxGroupType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType::EventBoxGroupType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType  TrackDefinitions::DataModels::EventBoxGroupType::Color{static_cast<int32_t>(0x0)};
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType  TrackDefinitions::DataModels::EventBoxGroupType::Rotation{static_cast<int32_t>(0x1)};
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType  TrackDefinitions::DataModels::EventBoxGroupType::Translation{static_cast<int32_t>(0x2)};
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType  TrackDefinitions::DataModels::EventBoxGroupType::FloatFx{static_cast<int32_t>(0xb)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
