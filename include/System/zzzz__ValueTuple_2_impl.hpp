#pragma once
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,::UnityEngine::Vector3>::operator ::System::IEquatable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,::UnityEngine::Vector3>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,::UnityEngine::Vector3>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,::UnityEngine::Vector3>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,::UnityEngine::Vector3>::operator ::System::IComparable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,::UnityEngine::Vector3>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,::UnityEngine::Vector3>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::ValueTuple_2<T1,::UnityEngine::Vector3>::__set_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1& System::ValueTuple_2<T1,::UnityEngine::Vector3>::__get_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1 const& System::ValueTuple_2<T1,::UnityEngine::Vector3>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::ValueTuple_2<T1,::UnityEngine::Vector3>::__set_Item2(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::UnityEngine::Vector3& System::ValueTuple_2<T1,::UnityEngine::Vector3>::__get_Item2()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::UnityEngine::Vector3 const& System::ValueTuple_2<T1,::UnityEngine::Vector3>::__get_Item2() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void System::ValueTuple_2<T1,::UnityEngine::Vector3>::_ctor(T1  item1, ::UnityEngine::Vector3  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,::UnityEngine::Vector3>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,::UnityEngine::Vector3>::Equals(::System::ValueTuple_2<T1,::UnityEngine::Vector3>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,::UnityEngine::Vector3>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,::UnityEngine::Vector3>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,::UnityEngine::Vector3>::CompareTo(::System::ValueTuple_2<T1,::UnityEngine::Vector3>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,::UnityEngine::Vector3>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,::UnityEngine::Vector3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,::UnityEngine::Vector3>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,::UnityEngine::Vector3>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,::UnityEngine::Vector3>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::ValueTuple_2<T1,::UnityEngine::Vector3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::ValueTuple_2<T1,::UnityEngine::Vector3>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,::UnityEngine::Vector3>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::System::ValueTuple_2<T1,::UnityEngine::Vector3>::ValueTuple_2(T1  Item1, ::UnityEngine::Vector3  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->Item1 = Item1;
this->Item2 = Item2;
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,int64_t>>"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int64_t>::operator ::System::IEquatable_1<::System::ValueTuple_2<T1,int64_t>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1,int64_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int64_t>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int64_t>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int64_t>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,int64_t>>"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int64_t>::operator ::System::IComparable_1<::System::ValueTuple_2<T1,int64_t>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1,int64_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int64_t>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int64_t>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::ValueTuple_2<T1,int64_t>::__set_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1& System::ValueTuple_2<T1,int64_t>::__get_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1 const& System::ValueTuple_2<T1,int64_t>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::ValueTuple_2<T1,int64_t>::__set_Item2(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr int64_t& System::ValueTuple_2<T1,int64_t>::__get_Item2()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr int64_t const& System::ValueTuple_2<T1,int64_t>::__get_Item2() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void System::ValueTuple_2<T1,int64_t>::_ctor(T1  item1, int64_t  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,int64_t>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,int64_t>::Equals(::System::ValueTuple_2<T1,int64_t>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,int64_t>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int64_t>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int64_t>::CompareTo(::System::ValueTuple_2<T1,int64_t>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int64_t>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int64_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int64_t>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int64_t>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int64_t>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::ValueTuple_2<T1,int64_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::ValueTuple_2<T1,int64_t>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int64_t>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int64_t>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::System::ValueTuple_2<T1,int64_t>::ValueTuple_2(T1  Item1, int64_t  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item1 = Item1;
this->Item2 = Item2;
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,int32_t>>"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int32_t>::operator ::System::IEquatable_1<::System::ValueTuple_2<T1,int32_t>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1,int32_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int32_t>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int32_t>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int32_t>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,int32_t>>"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int32_t>::operator ::System::IComparable_1<::System::ValueTuple_2<T1,int32_t>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1,int32_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int32_t>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,int32_t>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::ValueTuple_2<T1,int32_t>::__set_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1& System::ValueTuple_2<T1,int32_t>::__get_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1 const& System::ValueTuple_2<T1,int32_t>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::ValueTuple_2<T1,int32_t>::__set_Item2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr int32_t& System::ValueTuple_2<T1,int32_t>::__get_Item2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr int32_t const& System::ValueTuple_2<T1,int32_t>::__get_Item2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void System::ValueTuple_2<T1,int32_t>::_ctor(T1  item1, int32_t  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,int32_t>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,int32_t>::Equals(::System::ValueTuple_2<T1,int32_t>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,int32_t>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int32_t>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int32_t>::CompareTo(::System::ValueTuple_2<T1,int32_t>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int32_t>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int32_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int32_t>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int32_t>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int32_t>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::ValueTuple_2<T1,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::ValueTuple_2<T1,int32_t>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,int32_t>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,int32_t>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::System::ValueTuple_2<T1,int32_t>::ValueTuple_2(T1  Item1, int32_t  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item1 = Item1;
this->Item2 = Item2;
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,bool>>"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,bool>::operator ::System::IEquatable_1<::System::ValueTuple_2<T1,bool>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1,bool>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,bool>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,bool>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,bool>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,bool>>"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,bool>::operator ::System::IComparable_1<::System::ValueTuple_2<T1,bool>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1,bool>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,bool>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr  System::ValueTuple_2<T1,bool>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::ValueTuple_2<T1,bool>::__set_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1& System::ValueTuple_2<T1,bool>::__get_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1 const& System::ValueTuple_2<T1,bool>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void System::ValueTuple_2<T1,bool>::__set_Item2(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr bool& System::ValueTuple_2<T1,bool>::__get_Item2()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr bool const& System::ValueTuple_2<T1,bool>::__get_Item2() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void System::ValueTuple_2<T1,bool>::_ctor(T1  item1, bool  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,bool>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,bool>::Equals(::System::ValueTuple_2<T1,bool>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool System::ValueTuple_2<T1,bool>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,bool>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,bool>::CompareTo(::System::ValueTuple_2<T1,bool>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,bool>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,bool>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,bool>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,bool>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,bool>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::ValueTuple_2<T1,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::StringW System::ValueTuple_2<T1,bool>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t System::ValueTuple_2<T1,bool>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,bool>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::System::ValueTuple_2<T1,bool>::ValueTuple_2(T1  Item1, bool  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item1 = Item1;
this->Item2 = Item2;
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,T2>>"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::IComparable_1<::System::ValueTuple_2<T1,T2>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1,T2>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::ValueTuple_2<T1,T2>::__set_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T1>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1& System::ValueTuple_2<T1,T2>::__get_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1 const& System::ValueTuple_2<T1,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::ValueTuple_2<T1,T2>::__set_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T2>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::ValueTuple_2<T1,T2>::__get_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::ValueTuple_2<T1,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void System::ValueTuple_2<T1,T2>::_ctor(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<T1,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<T1,T2>::Equals(::System::ValueTuple_2<T1,T2>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::CompareTo(::System::ValueTuple_2<T1,T2>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::ValueTuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::ValueTuple_2<T1,T2>::ValueTuple_2(T1  Item1, T2  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item1 = Item1;
this->Item2 = Item2;
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<int32_t,T2>>"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<int32_t,T2>::operator ::System::IEquatable_1<::System::ValueTuple_2<int32_t,T2>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<int32_t,T2>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<int32_t,T2>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<int32_t,T2>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<int32_t,T2>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<int32_t,T2>>"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<int32_t,T2>::operator ::System::IComparable_1<::System::ValueTuple_2<int32_t,T2>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<int32_t,T2>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<int32_t,T2>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<int32_t,T2>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::ValueTuple_2<int32_t,T2>::__set_Item1(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr int32_t& System::ValueTuple_2<int32_t,T2>::__get_Item1()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr int32_t const& System::ValueTuple_2<int32_t,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::ValueTuple_2<int32_t,T2>::__set_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::ValueTuple_2<int32_t,T2>::__get_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::ValueTuple_2<int32_t,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline void System::ValueTuple_2<int32_t,T2>::_ctor(int32_t  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<int32_t,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<int32_t,T2>::Equals(::System::ValueTuple_2<int32_t,T2>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<int32_t,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<int32_t,T2>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<int32_t,T2>::CompareTo(::System::ValueTuple_2<int32_t,T2>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<int32_t,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<int32_t,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<int32_t,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<int32_t,T2>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<int32_t,T2>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::ValueTuple_2<int32_t,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::ValueTuple_2<int32_t,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<int32_t,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::ValueTuple_2<int32_t,T2>::ValueTuple_2(int32_t  Item1, T2  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item1 = Item1;
this->Item2 = Item2;
}
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ValueTuple_2<int32_t,bool>::*)(int32_t, bool)>(&::System::ValueTuple_2<int32_t,bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ValueTuple_2<int32_t,bool>::*)(::System::Object*)>(&::System::ValueTuple_2<int32_t,bool>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ValueTuple_2<int32_t,bool>::*)(::System::ValueTuple_2<int32_t,bool>)>(&::System::ValueTuple_2<int32_t,bool>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.System_Collections_IStructuralEquatable_Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ValueTuple_2<int32_t,bool>::*)(::System::Object*, ::System::Collections::IEqualityComparer*)>(&::System::ValueTuple_2<int32_t,bool>::System_Collections_IStructuralEquatable_Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.System_IComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,bool>::*)(::System::Object*)>(&::System::ValueTuple_2<int32_t,bool>::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,bool>::*)(::System::ValueTuple_2<int32_t,bool>)>(&::System::ValueTuple_2<int32_t,bool>::CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.System_Collections_IStructuralComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,bool>::*)(::System::Object*, ::System::Collections::IComparer*)>(&::System::ValueTuple_2<int32_t,bool>::System_Collections_IStructuralComparable_CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,bool>::*)()>(&::System::ValueTuple_2<int32_t,bool>::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.System_Collections_IStructuralEquatable_GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,bool>::*)(::System::Collections::IEqualityComparer*)>(&::System::ValueTuple_2<int32_t,bool>::System_Collections_IStructuralEquatable_GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.GetHashCodeCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,bool>::*)(::System::Collections::IEqualityComparer*)>(&::System::ValueTuple_2<int32_t,bool>::GetHashCodeCore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.System_IValueTupleInternal_GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,bool>::*)(::System::Collections::IEqualityComparer*)>(&::System::ValueTuple_2<int32_t,bool>::System_IValueTupleInternal_GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ValueTuple_2<int32_t,bool>::*)()>(&::System::ValueTuple_2<int32_t,bool>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.System_IValueTupleInternal_ToStringEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ValueTuple_2<int32_t,bool>::*)()>(&::System::ValueTuple_2<int32_t,bool>::System_IValueTupleInternal_ToStringEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,bool>.System_Runtime_CompilerServices_ITuple_get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,bool>::*)()>(&::System::ValueTuple_2<int32_t,bool>::System_Runtime_CompilerServices_ITuple_get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<int32_t,bool>>"
constexpr  System::ValueTuple_2<int32_t,bool>::operator ::System::IEquatable_1<::System::ValueTuple_2<int32_t,bool>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<int32_t,bool>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr  System::ValueTuple_2<int32_t,bool>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr  System::ValueTuple_2<int32_t,bool>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  System::ValueTuple_2<int32_t,bool>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<int32_t,bool>>"
constexpr  System::ValueTuple_2<int32_t,bool>::operator ::System::IComparable_1<::System::ValueTuple_2<int32_t,bool>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<int32_t,bool>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr  System::ValueTuple_2<int32_t,bool>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr  System::ValueTuple_2<int32_t,bool>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::ValueTuple_2<int32_t,bool>::__set_Item1(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ValueTuple_2<int32_t,bool>::__get_Item1()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ValueTuple_2<int32_t,bool>::__get_Item1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::ValueTuple_2<int32_t,bool>::__set_Item2(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::ValueTuple_2<int32_t,bool>::__get_Item2()  {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::ValueTuple_2<int32_t,bool>::__get_Item2() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::ValueTuple_2<int32_t,bool>::_ctor(int32_t  item1, bool  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
inline bool System::ValueTuple_2<int32_t,bool>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline bool System::ValueTuple_2<int32_t,bool>::Equals(::System::ValueTuple_2<int32_t,bool>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool System::ValueTuple_2<int32_t,bool>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
inline int32_t System::ValueTuple_2<int32_t,bool>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
inline int32_t System::ValueTuple_2<int32_t,bool>::CompareTo(::System::ValueTuple_2<int32_t,bool>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
inline int32_t System::ValueTuple_2<int32_t,bool>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
inline int32_t System::ValueTuple_2<int32_t,bool>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::ValueTuple_2<int32_t,bool>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
inline int32_t System::ValueTuple_2<int32_t,bool>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
inline int32_t System::ValueTuple_2<int32_t,bool>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
inline ::StringW System::ValueTuple_2<int32_t,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::ValueTuple_2<int32_t,bool>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t System::ValueTuple_2<int32_t,bool>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,bool>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ValueTuple_2<int32_t,bool>::ValueTuple_2(int32_t  Item1, bool  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->Item1 = Item1;
this->Item2 = Item2;
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<bool,T2>>"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<bool,T2>::operator ::System::IEquatable_1<::System::ValueTuple_2<bool,T2>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<bool,T2>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<bool,T2>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<bool,T2>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<bool,T2>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<bool,T2>>"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<bool,T2>::operator ::System::IComparable_1<::System::ValueTuple_2<bool,T2>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<bool,T2>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<bool,T2>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<bool,T2>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::ValueTuple_2<bool,T2>::__set_Item1(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr bool& System::ValueTuple_2<bool,T2>::__get_Item1()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr bool const& System::ValueTuple_2<bool,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::ValueTuple_2<bool,T2>::__set_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::ValueTuple_2<bool,T2>::__get_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::ValueTuple_2<bool,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline void System::ValueTuple_2<bool,T2>::_ctor(bool  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<bool,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<bool,T2>::Equals(::System::ValueTuple_2<bool,T2>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<bool,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<bool,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<bool,T2>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<bool,T2>::CompareTo(::System::ValueTuple_2<bool,T2>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<bool,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<bool,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<bool,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<bool,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<bool,T2>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<bool,T2>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::ValueTuple_2<bool,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::ValueTuple_2<bool,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<bool,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<bool,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::ValueTuple_2<bool,T2>::ValueTuple_2(bool  Item1, T2  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item1 = Item1;
this->Item2 = Item2;
}
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ValueTuple_2<int32_t,int32_t>::*)(int32_t, int32_t)>(&::System::ValueTuple_2<int32_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::Object*)>(&::System::ValueTuple_2<int32_t,int32_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::ValueTuple_2<int32_t,int32_t>)>(&::System::ValueTuple_2<int32_t,int32_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.System_Collections_IStructuralEquatable_Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::Object*, ::System::Collections::IEqualityComparer*)>(&::System::ValueTuple_2<int32_t,int32_t>::System_Collections_IStructuralEquatable_Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.System_IComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::Object*)>(&::System::ValueTuple_2<int32_t,int32_t>::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::ValueTuple_2<int32_t,int32_t>)>(&::System::ValueTuple_2<int32_t,int32_t>::CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.System_Collections_IStructuralComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::Object*, ::System::Collections::IComparer*)>(&::System::ValueTuple_2<int32_t,int32_t>::System_Collections_IStructuralComparable_CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,int32_t>::*)()>(&::System::ValueTuple_2<int32_t,int32_t>::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.System_Collections_IStructuralEquatable_GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::Collections::IEqualityComparer*)>(&::System::ValueTuple_2<int32_t,int32_t>::System_Collections_IStructuralEquatable_GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.GetHashCodeCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::Collections::IEqualityComparer*)>(&::System::ValueTuple_2<int32_t,int32_t>::GetHashCodeCore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.System_IValueTupleInternal_GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,int32_t>::*)(::System::Collections::IEqualityComparer*)>(&::System::ValueTuple_2<int32_t,int32_t>::System_IValueTupleInternal_GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ValueTuple_2<int32_t,int32_t>::*)()>(&::System::ValueTuple_2<int32_t,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.System_IValueTupleInternal_ToStringEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ValueTuple_2<int32_t,int32_t>::*)()>(&::System::ValueTuple_2<int32_t,int32_t>::System_IValueTupleInternal_ToStringEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ValueTuple_2<int32_t,int32_t>.System_Runtime_CompilerServices_ITuple_get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ValueTuple_2<int32_t,int32_t>::*)()>(&::System::ValueTuple_2<int32_t,int32_t>::System_Runtime_CompilerServices_ITuple_get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<int32_t,int32_t>>"
constexpr  System::ValueTuple_2<int32_t,int32_t>::operator ::System::IEquatable_1<::System::ValueTuple_2<int32_t,int32_t>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<int32_t,int32_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr  System::ValueTuple_2<int32_t,int32_t>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr  System::ValueTuple_2<int32_t,int32_t>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  System::ValueTuple_2<int32_t,int32_t>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<int32_t,int32_t>>"
constexpr  System::ValueTuple_2<int32_t,int32_t>::operator ::System::IComparable_1<::System::ValueTuple_2<int32_t,int32_t>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<int32_t,int32_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr  System::ValueTuple_2<int32_t,int32_t>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr  System::ValueTuple_2<int32_t,int32_t>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::ValueTuple_2<int32_t,int32_t>::__set_Item1(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ValueTuple_2<int32_t,int32_t>::__get_Item1()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ValueTuple_2<int32_t,int32_t>::__get_Item1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::ValueTuple_2<int32_t,int32_t>::__set_Item2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ValueTuple_2<int32_t,int32_t>::__get_Item2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ValueTuple_2<int32_t,int32_t>::__get_Item2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::ValueTuple_2<int32_t,int32_t>::_ctor(int32_t  item1, int32_t  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
inline bool System::ValueTuple_2<int32_t,int32_t>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline bool System::ValueTuple_2<int32_t,int32_t>::Equals(::System::ValueTuple_2<int32_t,int32_t>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool System::ValueTuple_2<int32_t,int32_t>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
inline int32_t System::ValueTuple_2<int32_t,int32_t>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
inline int32_t System::ValueTuple_2<int32_t,int32_t>::CompareTo(::System::ValueTuple_2<int32_t,int32_t>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
inline int32_t System::ValueTuple_2<int32_t,int32_t>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
inline int32_t System::ValueTuple_2<int32_t,int32_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::ValueTuple_2<int32_t,int32_t>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
inline int32_t System::ValueTuple_2<int32_t,int32_t>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
inline int32_t System::ValueTuple_2<int32_t,int32_t>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
inline ::StringW System::ValueTuple_2<int32_t,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::ValueTuple_2<int32_t,int32_t>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t System::ValueTuple_2<int32_t,int32_t>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<int32_t,int32_t>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ValueTuple_2<int32_t,int32_t>::ValueTuple_2(int32_t  Item1, int32_t  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->Item1 = Item1;
this->Item2 = Item2;
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,T2>>"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::IComparable_1<::System::ValueTuple_2<T1,T2>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_2<T1,T2>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  System::ValueTuple_2<T1,T2>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::ValueTuple_2<T1,T2>::__set_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1& System::ValueTuple_2<T1,T2>::__get_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1 const& System::ValueTuple_2<T1,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void System::ValueTuple_2<T1,T2>::__set_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& System::ValueTuple_2<T1,T2>::__get_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& System::ValueTuple_2<T1,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void System::ValueTuple_2<T1,T2>::_ctor(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item1, item2);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<T1,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<T1,T2>::Equals(::System::ValueTuple_2<T1,T2>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::CompareTo(::System::ValueTuple_2<T1,T2>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::ValueTuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::StringW System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t System::ValueTuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_2<T1,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::ValueTuple_2<T1,T2>::ValueTuple_2(T1  Item1, T2  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item1 = Item1;
this->Item2 = Item2;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
