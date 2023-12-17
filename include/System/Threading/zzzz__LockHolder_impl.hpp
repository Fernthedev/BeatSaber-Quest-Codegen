#pragma once
#include "System/Threading/zzzz__LockHolder_def.hpp"
#include "System/Threading/zzzz__Lock_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Threading::LockHolder.Hold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::LockHolder (*)(::System::Threading::Lock*)>(&::System::Threading::LockHolder::Hold)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2614158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockHolder>::get(),
                            "Hold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Lock*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockHolder.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::LockHolder::*)()>(&::System::Threading::LockHolder::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2614184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockHolder>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Threading::LockHolder::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::Threading::LockHolder::__set__lock(::System::Threading::Lock*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Lock*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Lock*>(value));
}
constexpr ::System::Threading::Lock* System::Threading::LockHolder::__get__lock()  {
return ::cordl_internals::getInstanceField<::System::Threading::Lock*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Lock*> System::Threading::LockHolder::__get__lock() const {
return ::cordl_internals::getInstanceField<::System::Threading::Lock*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::System::Threading::LockHolder System::Threading::LockHolder::Hold(::System::Threading::Lock*  l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockHolder>::get(),
                            "Hold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Lock*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::LockHolder, false>(nullptr, ___internal_method, l);
}
inline void System::Threading::LockHolder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockHolder>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_lock", ty: "::System::Threading::Lock*", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Threading::LockHolder::LockHolder(::System::Threading::Lock*  _lock) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_lock = _lock;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
