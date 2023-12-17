#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XHashtable_1_def.hpp"
#include "System/Xml/Linq/zzzz__XHashtable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TValue>
constexpr void GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__set_Value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TValue>(value));
}
template<typename TValue>
constexpr TValue& GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__get_Value()  {
return ::cordl_internals::getInstanceField<TValue, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TValue>
constexpr TValue const& GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__get_Value() const {
return ::cordl_internals::getInstanceField<TValue, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TValue>
constexpr void GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__set_HashCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename TValue>
constexpr int32_t& GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__get_HashCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TValue>
constexpr int32_t const& GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__get_HashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TValue>
constexpr void GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__set_Next(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename TValue>
constexpr int32_t& GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__get_Next()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TValue>
constexpr int32_t const& GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__get_Next() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("csnull") }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename TValue>
constexpr ::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__XHashtable_1__XHashtableState__Entry(TValue  Value, int32_t  HashCode, int32_t  Next) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Value = Value;
this->HashCode = HashCode;
this->Next = Next;
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>(object, method));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::StringW System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>::Invoke(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__get__buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__set__entries(::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__get__entries()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> const& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__get__entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__set__numEntries(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__get__numEntries()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__get__numEntries() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__set__extractKey(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*, 0x28>(this, std::forward<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__get__extractKey()  {
return ::cordl_internals::getInstanceField<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*> System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__get__extractKey() const {
return ::cordl_internals::getInstanceField<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  extractKey, int32_t  capacity)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>(extractKey, capacity));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  extractKey, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, extractKey, capacity);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::TryGetValue(::StringW  key, int32_t  index, int32_t  count, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, index, count, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::TryAdd(TValue  value, ByRef<TValue>  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(),
                            "TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, newValue);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::FindEntry(int32_t  hashCode, ::StringW  key, int32_t  index, int32_t  count, ByRef<int32_t>  entryIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(),
                            "FindEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, hashCode, key, index, count, entryIndex);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::ComputeHashCode(::StringW  key, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(),
                            "ComputeHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, key, index, count);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Xml::Linq::XHashtable_1<TValue>::__set__state(::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*, 0x10>(this, std::forward<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* System::Xml::Linq::XHashtable_1<TValue>::__get__state()  {
return ::cordl_internals::getInstanceField<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*> System::Xml::Linq::XHashtable_1<TValue>::__get__state() const {
return ::cordl_internals::getInstanceField<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Xml::Linq::XHashtable_1<TValue>* System::Xml::Linq::XHashtable_1<TValue>::New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  extractKey, int32_t  capacity)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Linq::XHashtable_1<TValue>*>(extractKey, capacity));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Xml::Linq::XHashtable_1<TValue>::_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  extractKey, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XHashtable_1<TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, extractKey, capacity);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Xml::Linq::XHashtable_1<TValue>::TryGetValue(::StringW  key, int32_t  index, int32_t  count, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XHashtable_1<TValue>*>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, index, count, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Xml::Linq::XHashtable_1<TValue>::Add(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XHashtable_1<TValue>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
