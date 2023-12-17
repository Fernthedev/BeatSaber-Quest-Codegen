#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultSerializationBinder_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ConvertUtils_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__set__lock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Object* Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get__lock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get__lock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__set__store(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get__store()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get__store() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__set__creator(::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*, 0x20>(this, std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get__creator()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::__get__creator() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::New_ctor(::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  creator)  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*>(creator));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::_ctor(::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, creator);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::Get(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>::AddValue(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__set__lock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Object* Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get__lock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get__lock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__set__store(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get__store()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get__store() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__set__creator(::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*, 0x20>(this, std::forward<::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get__creator()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::__get__creator() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::New_ctor(::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  creator)  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*>(creator));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::_ctor(::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, creator);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::Get(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>::AddValue(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__set__lock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Object* Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__lock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__lock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__set__store(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__store()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,TValue>*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__store() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__set__creator(::System::Func_2<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TKey,TValue>*, 0x20>(this, std::forward<::System::Func_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Func_2<TKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__creator()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TKey,TValue>*> Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__creator() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::New_ctor(::System::Func_2<TKey,TValue>*  creator)  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>*>(creator));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::_ctor(::System::Func_2<TKey,TValue>*  creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, creator);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::Get(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::AddValue(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>*>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
