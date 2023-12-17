#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_TransformEuler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_TransformEuler::*)(::HoudiniEngineUnity::HAPI_TransformEuler)>(&::HoudiniEngineUnity::Test_HAPI_TransformEuler::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21e36d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_TransformEuler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_TransformEuler.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_TransformEuler::*)(::HoudiniEngineUnity::Test_HAPI_TransformEuler*)>(&::HoudiniEngineUnity::Test_HAPI_TransformEuler::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x21e3708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>"
constexpr  HoudiniEngineUnity::Test_HAPI_TransformEuler::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::Test_HAPI_TransformEuler::__set_self(::HoudiniEngineUnity::HAPI_TransformEuler  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_TransformEuler, 0x10>(this, std::forward<::HoudiniEngineUnity::HAPI_TransformEuler>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler& HoudiniEngineUnity::Test_HAPI_TransformEuler::__get_self()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_TransformEuler, 0x10>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler const& HoudiniEngineUnity::Test_HAPI_TransformEuler::__get_self() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_TransformEuler, 0x10>(this);
}
inline ::HoudiniEngineUnity::Test_HAPI_TransformEuler* HoudiniEngineUnity::Test_HAPI_TransformEuler::New_ctor(::HoudiniEngineUnity::HAPI_TransformEuler  self)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>(self));
}
inline void HoudiniEngineUnity::Test_HAPI_TransformEuler::_ctor(::HoudiniEngineUnity::HAPI_TransformEuler  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_TransformEuler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_HAPI_TransformEuler::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_TransformEuler*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
