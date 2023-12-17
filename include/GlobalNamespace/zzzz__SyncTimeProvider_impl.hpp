#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SyncTimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncTimeProvider.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::SyncTimeProvider::*)()>(&::GlobalNamespace::SyncTimeProvider::get_time)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x226ef60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimeProvider*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncTimeProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SyncTimeProvider::*)()>(&::GlobalNamespace::SyncTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimeProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ITimeProvider"
constexpr  GlobalNamespace::SyncTimeProvider::operator ::GlobalNamespace::ITimeProvider*() noexcept {
return static_cast<::GlobalNamespace::ITimeProvider*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::SyncTimeProvider::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this, std::forward<::GlobalNamespace::IMultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::SyncTimeProvider::__get__multiplayerSessionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> GlobalNamespace::SyncTimeProvider::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this);
}
inline int64_t GlobalNamespace::SyncTimeProvider::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimeProvider*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SyncTimeProvider* GlobalNamespace::SyncTimeProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SyncTimeProvider*>());
}
inline void GlobalNamespace::SyncTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimeProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
