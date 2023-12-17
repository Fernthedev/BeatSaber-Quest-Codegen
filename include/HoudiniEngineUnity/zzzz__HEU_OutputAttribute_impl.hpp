#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_OutputAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_OutputAttribute::*)()>(&::HoudiniEngineUnity::HEU_OutputAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21839d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_OutputAttribute::__get__name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_OutputAttribute::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__class(::HoudiniEngineUnity::HAPI_AttributeOwner  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeOwner, 0x18>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeOwner>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner& HoudiniEngineUnity::HEU_OutputAttribute::__get__class()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeOwner, 0x18>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner const& HoudiniEngineUnity::HEU_OutputAttribute::__get__class() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeOwner, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__type(::HoudiniEngineUnity::HAPI_StorageType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_StorageType, 0x1c>(this, std::forward<::HoudiniEngineUnity::HAPI_StorageType>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_StorageType& HoudiniEngineUnity::HEU_OutputAttribute::__get__type()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_StorageType, 0x1c>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_StorageType const& HoudiniEngineUnity::HEU_OutputAttribute::__get__type() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_StorageType, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_OutputAttribute::__get__count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_OutputAttribute::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__tupleSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_OutputAttribute::__get__tupleSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_OutputAttribute::__get__tupleSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__intValues(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x28>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_OutputAttribute::__get__intValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x28>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__get__intValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__floatValues(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_OutputAttribute::__get__floatValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__get__floatValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__stringValues(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_OutputAttribute::__get__stringValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__get__stringValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this);
}
inline ::HoudiniEngineUnity::HEU_OutputAttribute* HoudiniEngineUnity::HEU_OutputAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_OutputAttribute*>());
}
inline void HoudiniEngineUnity::HEU_OutputAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
