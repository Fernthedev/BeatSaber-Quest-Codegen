#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoseObjectIdSO.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PoseObjectIdSO::*)()>(&::GlobalNamespace::PoseObjectIdSO::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23017b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObjectIdSO*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseObjectIdSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoseObjectIdSO::*)()>(&::GlobalNamespace::PoseObjectIdSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23017b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObjectIdSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PoseObjectIdSO::__set__serializedId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PoseObjectIdSO::__get__serializedId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::PoseObjectIdSO::__get__serializedId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::StringW GlobalNamespace::PoseObjectIdSO::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObjectIdSO*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PoseObjectIdSO* GlobalNamespace::PoseObjectIdSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PoseObjectIdSO*>());
}
inline void GlobalNamespace::PoseObjectIdSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObjectIdSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
