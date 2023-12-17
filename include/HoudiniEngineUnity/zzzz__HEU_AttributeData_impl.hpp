#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_AttributeData__AttributeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_AttributeData__AttributeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_AttributeData__AttributeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType::__HEU_AttributeData__AttributeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  HoudiniEngineUnity::__HEU_AttributeData__AttributeType::UNDEFINED{static_cast<int32_t>(0xffffffff)};
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  HoudiniEngineUnity::__HEU_AttributeData__AttributeType::BOOL{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  HoudiniEngineUnity::__HEU_AttributeData__AttributeType::INT{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  HoudiniEngineUnity::__HEU_AttributeData__AttributeType::FLOAT{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  HoudiniEngineUnity::__HEU_AttributeData__AttributeType::STRING{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  HoudiniEngineUnity::__HEU_AttributeData__AttributeType::MAX{static_cast<int32_t>(0x4)};
constexpr void HoudiniEngineUnity::__HEU_AttributeData__AttributeState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_AttributeData__AttributeState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_AttributeData__AttributeState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState::__HEU_AttributeData__AttributeState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState  HoudiniEngineUnity::__HEU_AttributeData__AttributeState::INVALID{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState  HoudiniEngineUnity::__HEU_AttributeData__AttributeState::SYNCED{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState  HoudiniEngineUnity::__HEU_AttributeData__AttributeState::LOCAL_DIRTY{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributeData.IsColorAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributeData::*)()>(&::HoudiniEngineUnity::HEU_AttributeData::IsColorAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x217f7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                            "IsColorAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributeData.CopyValuesTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributeData::*)(::HoudiniEngineUnity::HEU_AttributeData*)>(&::HoudiniEngineUnity::HEU_AttributeData::CopyValuesTo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x217f834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                            "CopyValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributeData.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributeData::*)(::HoudiniEngineUnity::HEU_AttributeData*)>(&::HoudiniEngineUnity::HEU_AttributeData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x217f958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributeData::*)()>(&::HoudiniEngineUnity::HEU_AttributeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217fc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>"
constexpr  HoudiniEngineUnity::HEU_AttributeData::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__attributeInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_AttributeData::__get__attributeInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_AttributeData::__get__attributeInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_AttributeData::__get__name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_AttributeData::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__attributeType(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_AttributeData__AttributeType, 0x40>(this, std::forward<::HoudiniEngineUnity::__HEU_AttributeData__AttributeType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType& HoudiniEngineUnity::HEU_AttributeData::__get__attributeType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_AttributeData__AttributeType, 0x40>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const& HoudiniEngineUnity::HEU_AttributeData::__get__attributeType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_AttributeData__AttributeType, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__intValues(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x48>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_AttributeData::__get__intValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x48>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_AttributeData::__get__intValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__floatValues(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_AttributeData::__get__floatValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_AttributeData::__get__floatValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__stringValues(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x58>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_AttributeData::__get__stringValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x58>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_AttributeData::__get__stringValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x58>(this);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__attributeState(::HoudiniEngineUnity::__HEU_AttributeData__AttributeState  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_AttributeData__AttributeState, 0x60>(this, std::forward<::HoudiniEngineUnity::__HEU_AttributeData__AttributeState>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState& HoudiniEngineUnity::HEU_AttributeData::__get__attributeState()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_AttributeData__AttributeState, 0x60>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const& HoudiniEngineUnity::HEU_AttributeData::__get__attributeState() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_AttributeData__AttributeState, 0x60>(this);
}
inline bool HoudiniEngineUnity::HEU_AttributeData::IsColorAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                            "IsColorAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributeData::CopyValuesTo(::HoudiniEngineUnity::HEU_AttributeData*  destAttrData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                            "CopyValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, destAttrData);
}
inline bool HoudiniEngineUnity::HEU_AttributeData::IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributeData*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_AttributeData* HoudiniEngineUnity::HEU_AttributeData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_AttributeData*>());
}
inline void HoudiniEngineUnity::HEU_AttributeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
