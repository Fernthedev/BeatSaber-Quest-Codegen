#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ITupleInternal_def.hpp"
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1& System::Tuple_2<T1,T2>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1 const& System::Tuple_2<T1,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this, std::forward<T2>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::Tuple_2<T1,T2>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::Tuple_2<T1,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline T1 System::Tuple_2<T1,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline T2 System::Tuple_2<T1,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Tuple_2<T1,T2>* System::Tuple_2<T1,T2>::New_ctor(T1  item1, T2  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<T1,T2>*>(item1, item2));
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void System::Tuple_2<T1,T2>::_ctor(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<T1,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<T1,T2>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1& System::Tuple_2<T1,T2>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1 const& System::Tuple_2<T1,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this, std::forward<T2>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::Tuple_2<T1,T2>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::Tuple_2<T1,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline T1 System::Tuple_2<T1,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline T2 System::Tuple_2<T1,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Tuple_2<T1,T2>* System::Tuple_2<T1,T2>::New_ctor(T1  item1, T2  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<T1,T2>*>(item1, item2));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void System::Tuple_2<T1,T2>::_ctor(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<T1,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<T1,T2>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<float_t,T2>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<float_t,T2>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<float_t,T2>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<float_t,T2>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<float_t,T2>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<float_t,T2>::__set_m_Item1(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr float_t& System::Tuple_2<float_t,T2>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr float_t const& System::Tuple_2<float_t,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<float_t,T2>::__set_m_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::Tuple_2<float_t,T2>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::Tuple_2<float_t,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline float_t System::Tuple_2<float_t,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline T2 System::Tuple_2<float_t,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Tuple_2<float_t,T2>* System::Tuple_2<float_t,T2>::New_ctor(float_t  item1, T2  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<float_t,T2>*>(item1, item2));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline void System::Tuple_2<float_t,T2>::_ctor(float_t  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<float_t,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<float_t,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<float_t,T2>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<float_t,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<float_t,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<float_t,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<float_t,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<float_t,T2>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<float_t,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<float_t,T2>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::Tuple_2<T1,float_t>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::Tuple_2<T1,float_t>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::Tuple_2<T1,float_t>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::Tuple_2<T1,float_t>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::Tuple_2<T1,float_t>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::Tuple_2<T1,float_t>::__set_m_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1& System::Tuple_2<T1,float_t>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1 const& System::Tuple_2<T1,float_t>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::Tuple_2<T1,float_t>::__set_m_Item2(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr float_t& System::Tuple_2<T1,float_t>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr float_t const& System::Tuple_2<T1,float_t>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline T1 System::Tuple_2<T1,float_t>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline float_t System::Tuple_2<T1,float_t>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::System::Tuple_2<T1,float_t>* System::Tuple_2<T1,float_t>::New_ctor(T1  item1, float_t  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<T1,float_t>*>(item1, item2));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void System::Tuple_2<T1,float_t>::_ctor(T1  item1, float_t  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::Tuple_2<T1,float_t>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::Tuple_2<T1,float_t>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::Tuple_2<T1,float_t>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::Tuple_2<T1,float_t>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::Tuple_2<T1,float_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::Tuple_2<T1,float_t>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::Tuple_2<T1,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::Tuple_2<T1,float_t>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::Tuple_2<T1,float_t>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,float_t>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1& System::Tuple_2<T1,T2>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1 const& System::Tuple_2<T1,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this, std::forward<T2>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::Tuple_2<T1,T2>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::Tuple_2<T1,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline T1 System::Tuple_2<T1,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline T2 System::Tuple_2<T1,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Tuple_2<T1,T2>* System::Tuple_2<T1,T2>::New_ctor(T1  item1, T2  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<T1,T2>*>(item1, item2));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void System::Tuple_2<T1,T2>::_ctor(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<T1,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<T1,T2>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr T1& System::Tuple_2<T1,T2>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr T1 const& System::Tuple_2<T1,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x14>(this, std::forward<T2>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr T2& System::Tuple_2<T1,T2>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x14>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
constexpr T2 const& System::Tuple_2<T1,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x14>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline T1 System::Tuple_2<T1,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline T2 System::Tuple_2<T1,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline ::System::Tuple_2<T1,T2>* System::Tuple_2<T1,T2>::New_ctor(T1  item1, T2  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<T1,T2>*>(item1, item2));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline void System::Tuple_2<T1,T2>::_ctor(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline bool System::Tuple_2<T1,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline bool System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline int32_t System::Tuple_2<T1,T2>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline int32_t System::Tuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline ::StringW System::Tuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline ::StringW System::Tuple_2<T1,T2>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
inline int32_t System::Tuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<::System::Guid,T2>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<::System::Guid,T2>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<::System::Guid,T2>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<::System::Guid,T2>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<::System::Guid,T2>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<::System::Guid,T2>::__set_m_Item1(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x10>(this, std::forward<::System::Guid>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::Guid& System::Tuple_2<::System::Guid,T2>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::Guid const& System::Tuple_2<::System::Guid,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<::System::Guid,T2>::__set_m_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x20>(this, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::Tuple_2<::System::Guid,T2>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::Tuple_2<::System::Guid,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Guid System::Tuple_2<::System::Guid,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline T2 System::Tuple_2<::System::Guid,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Tuple_2<::System::Guid,T2>* System::Tuple_2<::System::Guid,T2>::New_ctor(::System::Guid  item1, T2  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<::System::Guid,T2>*>(item1, item2));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline void System::Tuple_2<::System::Guid,T2>::_ctor(::System::Guid  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<::System::Guid,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<::System::Guid,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<::System::Guid,T2>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<::System::Guid,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<::System::Guid,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<::System::Guid,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<::System::Guid,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<::System::Guid,T2>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<::System::Guid,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<::System::Guid,T2>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.get_Item1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Tuple_2<int32_t,int32_t>::*)()>(&::System::Tuple_2<int32_t,int32_t>::get_Item1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.get_Item2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Tuple_2<int32_t,int32_t>::*)()>(&::System::Tuple_2<int32_t,int32_t>::get_Item2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Tuple_2<int32_t,int32_t>::*)(int32_t, int32_t)>(&::System::Tuple_2<int32_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Tuple_2<int32_t,int32_t>::*)(::System::Object*)>(&::System::Tuple_2<int32_t,int32_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.System_Collections_IStructuralEquatable_Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Tuple_2<int32_t,int32_t>::*)(::System::Object*, ::System::Collections::IEqualityComparer*)>(&::System::Tuple_2<int32_t,int32_t>::System_Collections_IStructuralEquatable_Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.System_IComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Tuple_2<int32_t,int32_t>::*)(::System::Object*)>(&::System::Tuple_2<int32_t,int32_t>::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.System_Collections_IStructuralComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Tuple_2<int32_t,int32_t>::*)(::System::Object*, ::System::Collections::IComparer*)>(&::System::Tuple_2<int32_t,int32_t>::System_Collections_IStructuralComparable_CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Tuple_2<int32_t,int32_t>::*)()>(&::System::Tuple_2<int32_t,int32_t>::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.System_Collections_IStructuralEquatable_GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Tuple_2<int32_t,int32_t>::*)(::System::Collections::IEqualityComparer*)>(&::System::Tuple_2<int32_t,int32_t>::System_Collections_IStructuralEquatable_GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Tuple_2<int32_t,int32_t>::*)()>(&::System::Tuple_2<int32_t,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.System_ITupleInternal_ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Tuple_2<int32_t,int32_t>::*)(::System::Text::StringBuilder*)>(&::System::Tuple_2<int32_t,int32_t>::System_ITupleInternal_ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple_2<int32_t,int32_t>.System_Runtime_CompilerServices_ITuple_get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Tuple_2<int32_t,int32_t>::*)()>(&::System::Tuple_2<int32_t,int32_t>::System_Runtime_CompilerServices_ITuple_get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr  System::Tuple_2<int32_t,int32_t>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr  System::Tuple_2<int32_t,int32_t>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  System::Tuple_2<int32_t,int32_t>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
constexpr  System::Tuple_2<int32_t,int32_t>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr  System::Tuple_2<int32_t,int32_t>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
constexpr void System::Tuple_2<int32_t,int32_t>::__set_m_Item1(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Tuple_2<int32_t,int32_t>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Tuple_2<int32_t,int32_t>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Tuple_2<int32_t,int32_t>::__set_m_Item2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Tuple_2<int32_t,int32_t>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Tuple_2<int32_t,int32_t>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline int32_t System::Tuple_2<int32_t,int32_t>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Tuple_2<int32_t,int32_t>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Tuple_2<int32_t,int32_t>* System::Tuple_2<int32_t,int32_t>::New_ctor(int32_t  item1, int32_t  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<int32_t,int32_t>*>(item1, item2));
}
inline void System::Tuple_2<int32_t,int32_t>::_ctor(int32_t  item1, int32_t  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
inline bool System::Tuple_2<int32_t,int32_t>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline bool System::Tuple_2<int32_t,int32_t>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
inline int32_t System::Tuple_2<int32_t,int32_t>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
inline int32_t System::Tuple_2<int32_t,int32_t>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
inline int32_t System::Tuple_2<int32_t,int32_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Tuple_2<int32_t,int32_t>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
inline ::StringW System::Tuple_2<int32_t,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Tuple_2<int32_t,int32_t>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
inline int32_t System::Tuple_2<int32_t,int32_t>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<int32_t,int32_t>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::Tuple_2<T1,T2>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1& System::Tuple_2<T1,T2>::__get_m_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1 const& System::Tuple_2<T1,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::Tuple_2<T1,T2>::__set_m_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::Tuple_2<T1,T2>::__get_m_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::Tuple_2<T1,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline T1 System::Tuple_2<T1,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline T2 System::Tuple_2<T1,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Tuple_2<T1,T2>* System::Tuple_2<T1,T2>::New_ctor(T1  item1, T2  item2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Tuple_2<T1,T2>*>(item1, item2));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void System::Tuple_2<T1,T2>::_ctor(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<T1,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::Tuple_2<T1,T2>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, sb);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::Tuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple_2<T1,T2>*>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
