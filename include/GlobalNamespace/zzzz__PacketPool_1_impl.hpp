#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IPacketPool_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::PacketPool_1<T>::operator ::GlobalNamespace::IPacketPool_1<T>*() noexcept {
return static_cast<::GlobalNamespace::IPacketPool_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPacketPool"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::PacketPool_1<T>::operator ::GlobalNamespace::IPacketPool*() noexcept {
return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::PacketPool_1<T>::__set__bag(::System::Collections::Concurrent::ConcurrentBag_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::ConcurrentBag_1<T>*, 0x10>(this, std::forward<::System::Collections::Concurrent::ConcurrentBag_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>* GlobalNamespace::PacketPool_1<T>::__get__bag()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentBag_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentBag_1<T>*> GlobalNamespace::PacketPool_1<T>::__get__bag() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentBag_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::PacketPool_1<T>::Obtain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::PacketPool_1<T>::Release(T  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::PacketPool_1<T>::Fill()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(),
                            "Fill",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::PacketPool_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::PacketPool_1<T>::IPacketPool_Release(::GlobalNamespace::IPoolablePacket*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(),
                            "IPacketPool.Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolablePacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::PacketPool_1<T>* GlobalNamespace::PacketPool_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PacketPool_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::PacketPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
