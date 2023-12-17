#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_Transform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_Transform::*)(::HoudiniEngineUnity::HAPI_Transform)>(&::HoudiniEngineUnity::Test_HAPI_Transform::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21e2eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_Transform*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_Transform.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_Transform::*)(::HoudiniEngineUnity::Test_HAPI_Transform*)>(&::HoudiniEngineUnity::Test_HAPI_Transform::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x21e2ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_Transform*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>"
constexpr  HoudiniEngineUnity::Test_HAPI_Transform::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::Test_HAPI_Transform::__set_self(::HoudiniEngineUnity::HAPI_Transform  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_Transform, 0x10>(this, std::forward<::HoudiniEngineUnity::HAPI_Transform>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_Transform& HoudiniEngineUnity::Test_HAPI_Transform::__get_self()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_Transform, 0x10>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_Transform const& HoudiniEngineUnity::Test_HAPI_Transform::__get_self() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_Transform, 0x10>(this);
}
inline ::HoudiniEngineUnity::Test_HAPI_Transform* HoudiniEngineUnity::Test_HAPI_Transform::New_ctor(::HoudiniEngineUnity::HAPI_Transform  self)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_HAPI_Transform*>(self));
}
inline void HoudiniEngineUnity::Test_HAPI_Transform::_ctor(::HoudiniEngineUnity::HAPI_Transform  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_Transform*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_HAPI_Transform::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_Transform*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_Transform*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
