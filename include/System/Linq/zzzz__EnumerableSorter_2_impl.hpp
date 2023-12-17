#pragma once
#include "System/Linq/zzzz__EnumerableSorter_1_impl.hpp"
#include "System/Linq/zzzz__EnumerableSorter_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr void System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__set_keySelector(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*, 0x10>(this, std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>* System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*> System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr void System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::System::Collections::Generic::IComparer_1<int32_t>* System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr void System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr bool& System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr bool const& System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr void System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*> System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr void System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
inline ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>* System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::New_ctor(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*>(keySelector, comparer, descending, next));
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
inline void System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::_ctor(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
inline void System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::ComputeKeys(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
inline int32_t System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::*)(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*, ::System::Collections::Generic::IComparer_1<int32_t>*, bool, ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*)>(&::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::*)(::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>, int32_t)>(&::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__set_keySelector(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*, 0x10>(this, std::forward<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>(value));
}
constexpr ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>* System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*> System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*, 0x10>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<int32_t>* System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>* System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*> System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*, 0x28>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
inline ::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>* System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::New_ctor(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>(keySelector, comparer, descending, next));
}
inline void System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::_ctor(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
inline void System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::ComputeKeys(::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
inline int32_t System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::*)(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*, ::System::Collections::Generic::IComparer_1<int32_t>*, bool, ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*)>(&::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::*)(::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>, int32_t)>(&::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__set_keySelector(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*, 0x10>(this, std::forward<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>(value));
}
constexpr ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>* System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*> System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*, 0x10>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<int32_t>* System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>* System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*> System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*, 0x28>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
inline ::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>* System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::New_ctor(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>(keySelector, comparer, descending, next));
}
inline void System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::_ctor(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
inline void System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::ComputeKeys(::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
inline int32_t System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::*)(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*, ::System::Collections::Generic::IComparer_1<uint32_t>*, bool, ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, int32_t)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_keySelector(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*, 0x10>(this, std::forward<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>(value));
}
constexpr ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>* System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*> System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*, 0x10>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<uint32_t>* System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<uint32_t>*> System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_next(::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*, 0x28>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_keys(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x30>(this, std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x30>(this);
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x30>(this);
}
inline ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>* System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::New_ctor(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>(keySelector, comparer, descending, next));
}
inline void System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::_ctor(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
inline void System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::ComputeKeys(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
inline int32_t System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::*)(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*, ::System::Collections::Generic::IComparer_1<int32_t>*, bool, ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::*)(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>, int32_t)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_keySelector(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*, 0x10>(this, std::forward<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>(value));
}
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>* System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*> System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*, 0x10>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<int32_t>* System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*, 0x28>(this);
}
constexpr void System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
inline ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>* System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::New_ctor(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>(keySelector, comparer, descending, next));
}
inline void System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::_ctor(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
inline void System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::ComputeKeys(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
inline int32_t System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,uint32_t>::__set_keySelector(::System::Func_2<TElement,uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TElement,uint32_t>*, 0x10>(this, std::forward<::System::Func_2<TElement,uint32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Func_2<TElement,uint32_t>* System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,uint32_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,uint32_t>*> System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,uint32_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,uint32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<uint32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Collections::Generic::IComparer_1<uint32_t>* System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<uint32_t>*> System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,uint32_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr bool& System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr bool const& System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,uint32_t>::__set_next(::System::Linq::EnumerableSorter_1<TElement>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<TElement>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,uint32_t>::__set_keys(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x30>(this, std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& System::Linq::EnumerableSorter_2<TElement,uint32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline ::System::Linq::EnumerableSorter_2<TElement,uint32_t>* System::Linq::EnumerableSorter_2<TElement,uint32_t>::New_ctor(::System::Func_2<TElement,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<TElement,uint32_t>*>(keySelector, comparer, descending, next));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::EnumerableSorter_2<TElement,uint32_t>::_ctor(::System::Func_2<TElement,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::EnumerableSorter_2<TElement,uint32_t>::ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,uint32_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement,::Array<TElement>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline int32_t System::Linq::EnumerableSorter_2<TElement,uint32_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,uint32_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,float_t>::__set_keySelector(::System::Func_2<TElement,float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TElement,float_t>*, 0x10>(this, std::forward<::System::Func_2<TElement,float_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Func_2<TElement,float_t>* System::Linq::EnumerableSorter_2<TElement,float_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,float_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,float_t>*> System::Linq::EnumerableSorter_2<TElement,float_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,float_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,float_t>::__set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<float_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Collections::Generic::IComparer_1<float_t>* System::Linq::EnumerableSorter_2<TElement,float_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> System::Linq::EnumerableSorter_2<TElement,float_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,float_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr bool& System::Linq::EnumerableSorter_2<TElement,float_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr bool const& System::Linq::EnumerableSorter_2<TElement,float_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,float_t>::__set_next(::System::Linq::EnumerableSorter_1<TElement>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<TElement>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::EnumerableSorter_2<TElement,float_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> System::Linq::EnumerableSorter_2<TElement,float_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,float_t>::__set_keys(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<float_t,::Array<float_t>*>& System::Linq::EnumerableSorter_2<TElement,float_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<float_t,::Array<float_t>*> const& System::Linq::EnumerableSorter_2<TElement,float_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline ::System::Linq::EnumerableSorter_2<TElement,float_t>* System::Linq::EnumerableSorter_2<TElement,float_t>::New_ctor(::System::Func_2<TElement,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<TElement,float_t>*>(keySelector, comparer, descending, next));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::EnumerableSorter_2<TElement,float_t>::_ctor(::System::Func_2<TElement,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::EnumerableSorter_2<TElement,float_t>::ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,float_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement,::Array<TElement>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline int32_t System::Linq::EnumerableSorter_2<TElement,float_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,float_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,int32_t>::__set_keySelector(::System::Func_2<TElement,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TElement,int32_t>*, 0x10>(this, std::forward<::System::Func_2<TElement,int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Func_2<TElement,int32_t>* System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,int32_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,int32_t>*> System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,int32_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Collections::Generic::IComparer_1<int32_t>* System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,int32_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr bool& System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr bool const& System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<TElement>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<TElement>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::EnumerableSorter_2<TElement,int32_t>::__set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::EnumerableSorter_2<TElement,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline ::System::Linq::EnumerableSorter_2<TElement,int32_t>* System::Linq::EnumerableSorter_2<TElement,int32_t>::New_ctor(::System::Func_2<TElement,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<TElement,int32_t>*>(keySelector, comparer, descending, next));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::EnumerableSorter_2<TElement,int32_t>::_ctor(::System::Func_2<TElement,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::EnumerableSorter_2<TElement,int32_t>::ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,int32_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement,::Array<TElement>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline int32_t System::Linq::EnumerableSorter_2<TElement,int32_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,int32_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<float_t,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<float_t,float_t>::*)(::System::Func_2<float_t,float_t>*, ::System::Collections::Generic::IComparer_1<float_t>*, bool, ::System::Linq::EnumerableSorter_1<float_t>*)>(&::System::Linq::EnumerableSorter_2<float_t,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t,float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<float_t,float_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<float_t,float_t>::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::System::Linq::EnumerableSorter_2<float_t,float_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<float_t,float_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<float_t,float_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<float_t,float_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::EnumerableSorter_2<float_t,float_t>::__set_keySelector(::System::Func_2<float_t,float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<float_t,float_t>*, 0x10>(this, std::forward<::System::Func_2<float_t,float_t>*>(value));
}
constexpr ::System::Func_2<float_t,float_t>* System::Linq::EnumerableSorter_2<float_t,float_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<float_t,float_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,float_t>*> System::Linq::EnumerableSorter_2<float_t,float_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<float_t,float_t>*, 0x10>(this);
}
constexpr void System::Linq::EnumerableSorter_2<float_t,float_t>::__set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<float_t>*>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<float_t>* System::Linq::EnumerableSorter_2<float_t,float_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> System::Linq::EnumerableSorter_2<float_t,float_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this);
}
constexpr void System::Linq::EnumerableSorter_2<float_t,float_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Linq::EnumerableSorter_2<float_t,float_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Linq::EnumerableSorter_2<float_t,float_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Linq::EnumerableSorter_2<float_t,float_t>::__set_next(::System::Linq::EnumerableSorter_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<float_t>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<float_t>*>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<float_t>* System::Linq::EnumerableSorter_2<float_t,float_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<float_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<float_t>*> System::Linq::EnumerableSorter_2<float_t,float_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<float_t>*, 0x28>(this);
}
constexpr void System::Linq::EnumerableSorter_2<float_t,float_t>::__set_keys(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& System::Linq::EnumerableSorter_2<float_t,float_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& System::Linq::EnumerableSorter_2<float_t,float_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
inline ::System::Linq::EnumerableSorter_2<float_t,float_t>* System::Linq::EnumerableSorter_2<float_t,float_t>::New_ctor(::System::Func_2<float_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<float_t>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<float_t,float_t>*>(keySelector, comparer, descending, next));
}
inline void System::Linq::EnumerableSorter_2<float_t,float_t>::_ctor(::System::Func_2<float_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<float_t>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t,float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
inline void System::Linq::EnumerableSorter_2<float_t,float_t>::ComputeKeys(::ArrayW<float_t,::Array<float_t>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
inline int32_t System::Linq::EnumerableSorter_2<float_t,float_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<int32_t,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<int32_t,float_t>::*)(::System::Func_2<int32_t,float_t>*, ::System::Collections::Generic::IComparer_1<float_t>*, bool, ::System::Linq::EnumerableSorter_1<int32_t>*)>(&::System::Linq::EnumerableSorter_2<int32_t,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t,float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<int32_t,float_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<int32_t,float_t>::*)(::ArrayW<int32_t,::Array<int32_t>*>, int32_t)>(&::System::Linq::EnumerableSorter_2<int32_t,float_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<int32_t,float_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<int32_t,float_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<int32_t,float_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_keySelector(::System::Func_2<int32_t,float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<int32_t,float_t>*, 0x10>(this, std::forward<::System::Func_2<int32_t,float_t>*>(value));
}
constexpr ::System::Func_2<int32_t,float_t>* System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<int32_t,float_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t,float_t>*> System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<int32_t,float_t>*, 0x10>(this);
}
constexpr void System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<float_t>*>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<float_t>* System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>*, 0x18>(this);
}
constexpr void System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_next(::System::Linq::EnumerableSorter_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<int32_t>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<int32_t>*>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<int32_t>* System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<int32_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<int32_t>*> System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<int32_t>*, 0x28>(this);
}
constexpr void System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_keys(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
inline ::System::Linq::EnumerableSorter_2<int32_t,float_t>* System::Linq::EnumerableSorter_2<int32_t,float_t>::New_ctor(::System::Func_2<int32_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<int32_t>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>(keySelector, comparer, descending, next));
}
inline void System::Linq::EnumerableSorter_2<int32_t,float_t>::_ctor(::System::Func_2<int32_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<int32_t>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t,float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
inline void System::Linq::EnumerableSorter_2<int32_t,float_t>::ComputeKeys(::ArrayW<int32_t,::Array<int32_t>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
inline int32_t System::Linq::EnumerableSorter_2<int32_t,float_t>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Linq::EnumerableSorter_2<TElement,TKey>::__set_keySelector(::System::Func_2<TElement,TKey>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TElement,TKey>*, 0x10>(this, std::forward<::System::Func_2<TElement,TKey>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Func_2<TElement,TKey>* System::Linq::EnumerableSorter_2<TElement,TKey>::__get_keySelector()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,TKey>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,TKey>*> System::Linq::EnumerableSorter_2<TElement,TKey>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,TKey>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Linq::EnumerableSorter_2<TElement,TKey>::__set_comparer(::System::Collections::Generic::IComparer_1<TKey>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<TKey>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<TKey>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Collections::Generic::IComparer_1<TKey>* System::Linq::EnumerableSorter_2<TElement,TKey>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<TKey>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> System::Linq::EnumerableSorter_2<TElement,TKey>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<TKey>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Linq::EnumerableSorter_2<TElement,TKey>::__set_descending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr bool& System::Linq::EnumerableSorter_2<TElement,TKey>::__get_descending()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr bool const& System::Linq::EnumerableSorter_2<TElement,TKey>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Linq::EnumerableSorter_2<TElement,TKey>::__set_next(::System::Linq::EnumerableSorter_1<TElement>*  value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this, std::forward<::System::Linq::EnumerableSorter_1<TElement>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::EnumerableSorter_2<TElement,TKey>::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> System::Linq::EnumerableSorter_2<TElement,TKey>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr void System::Linq::EnumerableSorter_2<TElement,TKey>::__set_keys(::ArrayW<TKey,::Array<TKey>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<TKey,::Array<TKey>*>, 0x30>(this, std::forward<::ArrayW<TKey,::Array<TKey>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::ArrayW<TKey,::Array<TKey>*>& System::Linq::EnumerableSorter_2<TElement,TKey>::__get_keys()  {
return ::cordl_internals::getInstanceField<::ArrayW<TKey,::Array<TKey>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
constexpr ::ArrayW<TKey,::Array<TKey>*> const& System::Linq::EnumerableSorter_2<TElement,TKey>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<TKey,::Array<TKey>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
inline ::System::Linq::EnumerableSorter_2<TElement,TKey>* System::Linq::EnumerableSorter_2<TElement,TKey>::New_ctor(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<TElement,TKey>*>(keySelector, comparer, descending, next));
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Linq::EnumerableSorter_2<TElement,TKey>::_ctor(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,TKey>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,TKey>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keySelector, comparer, descending, next);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
inline void System::Linq::EnumerableSorter_2<TElement,TKey>::ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,TKey>*>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement,::Array<TElement>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, elements, count);
}
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
inline int32_t System::Linq::EnumerableSorter_2<TElement,TKey>::CompareKeys(int32_t  index1, int32_t  index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement,TKey>*>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index1, index2);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
