#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_Compatibility_def.hpp"
#include "TMPro/zzzz__TMP_Compatibility_def.hpp"
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
constexpr void TMPro::__TMP_Compatibility__AnchorPositions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::__TMP_Compatibility__AnchorPositions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::__TMP_Compatibility__AnchorPositions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions::__TMP_Compatibility__AnchorPositions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::TopLeft{static_cast<int32_t>(0x0)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::Top{static_cast<int32_t>(0x1)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::TopRight{static_cast<int32_t>(0x2)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::Left{static_cast<int32_t>(0x3)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::Center{static_cast<int32_t>(0x4)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::Right{static_cast<int32_t>(0x5)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::BottomLeft{static_cast<int32_t>(0x6)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::Bottom{static_cast<int32_t>(0x7)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::BottomRight{static_cast<int32_t>(0x8)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::BaseLine{static_cast<int32_t>(0x9)};
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions  TMPro::__TMP_Compatibility__AnchorPositions::None{static_cast<int32_t>(0xa)};
//  Writing Method size for method: ::TMPro::TMP_Compatibility.ConvertTextAlignmentEnumValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TextAlignmentOptions (*)(::TMPro::TextAlignmentOptions)>(&::TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c020b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Compatibility*>::get(),
                            "ConvertTextAlignmentEnumValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextAlignmentOptions>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::TMPro::TextAlignmentOptions TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues(::TMPro::TextAlignmentOptions  oldValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Compatibility*>::get(),
                            "ConvertTextAlignmentEnumValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextAlignmentOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TextAlignmentOptions, false>(nullptr, ___internal_method, oldValue);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
