#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__CollectionWrapper_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__IWrappedCollection_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Utilities::IWrappedCollection"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::Newtonsoft::Json::Utilities::IWrappedCollection*() noexcept {
return static_cast<::Newtonsoft::Json::Utilities::IWrappedCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__set__list(::System::Collections::IList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IList*, 0x10>(this, std::forward<::System::Collections::IList*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::IList* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__get__list()  {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__get__list() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__set__genericCollection(::System::Collections::Generic::ICollection_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::ICollection_1<T>*, 0x18>(this, std::forward<::System::Collections::Generic::ICollection_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::ICollection_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__get__genericCollection()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::ICollection_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<T>*> Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__get__genericCollection() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::ICollection_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__set__syncRoot(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Object* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__get__syncRoot()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::New_ctor(::System::Collections::IList*  list)  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(list));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::_ctor(::System::Collections::IList*  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, list);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::New_ctor(::System::Collections::Generic::ICollection_1<T>*  list)  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(list));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::_ctor(::System::Collections::Generic::ICollection_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, list);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, arrayIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.IList.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, arrayIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::VerifyValueType(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "VerifyValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::IsCompatibleObject(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "IsCompatibleObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::get_UnderlyingCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>::get(),
                            "get_UnderlyingCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
