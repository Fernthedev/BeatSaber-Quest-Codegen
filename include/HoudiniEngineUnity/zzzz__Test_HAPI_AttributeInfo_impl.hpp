#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_AttributeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_AttributeInfo::*)(::HoudiniEngineUnity::HAPI_AttributeInfo)>(&::HoudiniEngineUnity::Test_HAPI_AttributeInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21e352c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_AttributeInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_AttributeInfo::*)(::HoudiniEngineUnity::Test_HAPI_AttributeInfo*)>(&::HoudiniEngineUnity::Test_HAPI_AttributeInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21e3560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>"
constexpr  HoudiniEngineUnity::Test_HAPI_AttributeInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::Test_HAPI_AttributeInfo::__set_self(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::Test_HAPI_AttributeInfo::__get_self()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::Test_HAPI_AttributeInfo::__get_self() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this);
}
inline ::HoudiniEngineUnity::Test_HAPI_AttributeInfo* HoudiniEngineUnity::Test_HAPI_AttributeInfo::New_ctor(::HoudiniEngineUnity::HAPI_AttributeInfo  self)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>(self));
}
inline void HoudiniEngineUnity::Test_HAPI_AttributeInfo::_ctor(::HoudiniEngineUnity::HAPI_AttributeInfo  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_HAPI_AttributeInfo::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AttributeInfo*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
