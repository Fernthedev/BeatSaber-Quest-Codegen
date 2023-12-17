#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::WeakReference_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::WeakReference_1<T>::__set_handle(::System::Runtime::InteropServices::GCHandle  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x10>(this, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::InteropServices::GCHandle& System::WeakReference_1<T>::__get_handle()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::InteropServices::GCHandle const& System::WeakReference_1<T>::__get_handle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::WeakReference_1<T>::__set_trackResurrection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::WeakReference_1<T>::__get_trackResurrection()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::WeakReference_1<T>::__get_trackResurrection() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(T  target)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::WeakReference_1<T>*>(target));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::WeakReference_1<T>::_ctor(T  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(T  target, bool  trackResurrection)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::WeakReference_1<T>*>(target, trackResurrection));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::WeakReference_1<T>::_ctor(T  target, bool  trackResurrection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, trackResurrection);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::WeakReference_1<T>*>(info, context));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::WeakReference_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::WeakReference_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::WeakReference_1<T>::SetTarget(T  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(),
                            "SetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::WeakReference_1<T>::TryGetTarget(ByRef<T>  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(),
                            "TryGetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, target);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::WeakReference_1<T>::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
