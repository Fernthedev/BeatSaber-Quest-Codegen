#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ObjectInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_ObjectInfo::*)(::HoudiniEngineUnity::HAPI_ObjectInfo)>(&::HoudiniEngineUnity::Test_HAPI_ObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21e2c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ObjectInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_ObjectInfo::*)(::HoudiniEngineUnity::Test_HAPI_ObjectInfo*)>(&::HoudiniEngineUnity::Test_HAPI_ObjectInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x21e2c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>"
constexpr  HoudiniEngineUnity::Test_HAPI_ObjectInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::Test_HAPI_ObjectInfo::__set_self(::HoudiniEngineUnity::HAPI_ObjectInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_ObjectInfo, 0x10>(this, std::forward<::HoudiniEngineUnity::HAPI_ObjectInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo& HoudiniEngineUnity::Test_HAPI_ObjectInfo::__get_self()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_ObjectInfo, 0x10>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo const& HoudiniEngineUnity::Test_HAPI_ObjectInfo::__get_self() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_ObjectInfo, 0x10>(this);
}
inline ::HoudiniEngineUnity::Test_HAPI_ObjectInfo* HoudiniEngineUnity::Test_HAPI_ObjectInfo::New_ctor(::HoudiniEngineUnity::HAPI_ObjectInfo  self)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>(self));
}
inline void HoudiniEngineUnity::Test_HAPI_ObjectInfo::_ctor(::HoudiniEngineUnity::HAPI_ObjectInfo  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_HAPI_ObjectInfo::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ObjectInfo*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
