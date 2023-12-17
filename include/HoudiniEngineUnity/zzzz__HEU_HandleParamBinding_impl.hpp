#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HandleParamBinding_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HandleParamBinding_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType::__HEU_HandleParamBinding__HEU_HandleParamType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType  HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType::TRANSLATE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType  HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType::ROTATE{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType  HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType::SCALE{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HandleParamBinding.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HandleParamBinding::*)(::HoudiniEngineUnity::HEU_HandleParamBinding*)>(&::HoudiniEngineUnity::HEU_HandleParamBinding::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x21917d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HandleParamBinding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HandleParamBinding::*)()>(&::HoudiniEngineUnity::HEU_HandleParamBinding::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21908b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>"
constexpr  HoudiniEngineUnity::HEU_HandleParamBinding::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__paramType(::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType, 0x10>(this, std::forward<::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType& HoudiniEngineUnity::HEU_HandleParamBinding::__get__paramType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType, 0x10>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType const& HoudiniEngineUnity::HEU_HandleParamBinding::__get__paramType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__parmID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HandleParamBinding::__get__parmID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HandleParamBinding::__get__parmID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__paramName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HandleParamBinding::__get__paramName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HandleParamBinding::__get__paramName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__bDisabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HandleParamBinding::__get__bDisabled()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HandleParamBinding::__get__bDisabled() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__boundChannels(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<bool,::Array<bool>*>, 0x28>(this, std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
constexpr ::ArrayW<bool,::Array<bool>*>& HoudiniEngineUnity::HEU_HandleParamBinding::__get__boundChannels()  {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x28>(this);
}
constexpr ::ArrayW<bool,::Array<bool>*> const& HoudiniEngineUnity::HEU_HandleParamBinding::__get__boundChannels() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x28>(this);
}
inline bool HoudiniEngineUnity::HEU_HandleParamBinding::IsEquivalentTo(::HoudiniEngineUnity::HEU_HandleParamBinding*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_HandleParamBinding::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_HandleParamBinding*>());
}
inline void HoudiniEngineUnity::HEU_HandleParamBinding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
