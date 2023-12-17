#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::__HEU_ShelfToolData__ToolType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType  HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::GENERATOR{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType  HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::OPERATOR_SINGLE{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType  HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::OPERATOR_MULTI{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType  HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::BATCH{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ShelfToolData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ShelfToolData::*)()>(&::HoudiniEngineUnity::HEU_ShelfToolData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21d069c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ShelfToolData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__toolType(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType, 0x18>(this, std::forward<::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType& HoudiniEngineUnity::HEU_ShelfToolData::__get__toolType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType, 0x18>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const& HoudiniEngineUnity::HEU_ShelfToolData::__get__toolType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__toolTip(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__toolTip()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__toolTip() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__iconPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__iconPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__iconPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__assetPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__assetPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__assetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__helpURL(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__helpURL()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__helpURL() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__targets(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x40>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_ShelfToolData::__get__targets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x40>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_ShelfToolData::__get__targets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__jsonPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__jsonPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__jsonPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
inline ::HoudiniEngineUnity::HEU_ShelfToolData* HoudiniEngineUnity::HEU_ShelfToolData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_ShelfToolData*>());
}
inline void HoudiniEngineUnity::HEU_ShelfToolData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ShelfToolData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
