#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO.get_alwaysOwnedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AlwaysOwnedContentSO* (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentContainerSO::get_alwaysOwnedContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22343e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get(),
                            "get_alwaysOwnedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22343ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AlwaysOwnedContentContainerSO::__set__alwaysOwnedContent(::GlobalNamespace::AlwaysOwnedContentSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AlwaysOwnedContentSO*, 0x18>(this, std::forward<::GlobalNamespace::AlwaysOwnedContentSO*>(value));
}
constexpr ::GlobalNamespace::AlwaysOwnedContentSO* GlobalNamespace::AlwaysOwnedContentContainerSO::__get__alwaysOwnedContent()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AlwaysOwnedContentSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentSO*> GlobalNamespace::AlwaysOwnedContentContainerSO::__get__alwaysOwnedContent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AlwaysOwnedContentSO*, 0x18>(this);
}
inline ::GlobalNamespace::AlwaysOwnedContentSO* GlobalNamespace::AlwaysOwnedContentContainerSO::get_alwaysOwnedContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get(),
                            "get_alwaysOwnedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AlwaysOwnedContentSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::AlwaysOwnedContentContainerSO* GlobalNamespace::AlwaysOwnedContentContainerSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AlwaysOwnedContentContainerSO*>());
}
inline void GlobalNamespace::AlwaysOwnedContentContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
