#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FastAction_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type B>
constexpr void TMPro::FastAction_2<bool,B>::__set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*, 0x10>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type B>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>* TMPro::FastAction_2<bool,B>::__get_delegates()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type B>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*> TMPro::FastAction_2<bool,B>::__get_delegates() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type B>
constexpr void TMPro::FastAction_2<bool,B>::__set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type B>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>* TMPro::FastAction_2<bool,B>::__get_lookup()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type B>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*> TMPro::FastAction_2<bool,B>::__get_lookup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type B>
inline void TMPro::FastAction_2<bool,B>::Add(::System::Action_2<bool,B>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<bool,B>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<bool,B>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rhs);
}
template<::il2cpp_utils::il2cpp_reference_type B>
inline void TMPro::FastAction_2<bool,B>::Remove(::System::Action_2<bool,B>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<bool,B>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<bool,B>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rhs);
}
template<::il2cpp_utils::il2cpp_reference_type B>
inline void TMPro::FastAction_2<bool,B>::Call(bool  a, B  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<bool,B>*>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, a, b);
}
template<::il2cpp_utils::il2cpp_reference_type B>
inline ::TMPro::FastAction_2<bool,B>* TMPro::FastAction_2<bool,B>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::FastAction_2<bool,B>*>());
}
template<::il2cpp_utils::il2cpp_reference_type B>
inline void TMPro::FastAction_2<bool,B>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<bool,B>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr void TMPro::FastAction_2<A,B>::__set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*, 0x10>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>* TMPro::FastAction_2<A,B>::__get_delegates()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*> TMPro::FastAction_2<A,B>::__get_delegates() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr void TMPro::FastAction_2<A,B>::__set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>* TMPro::FastAction_2<A,B>::__get_lookup()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*> TMPro::FastAction_2<A,B>::__get_lookup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
inline void TMPro::FastAction_2<A,B>::Add(::System::Action_2<A,B>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<A,B>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<A,B>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rhs);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
inline void TMPro::FastAction_2<A,B>::Remove(::System::Action_2<A,B>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<A,B>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<A,B>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rhs);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
inline void TMPro::FastAction_2<A,B>::Call(A  a, B  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<A,B>*>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, a, b);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
inline ::TMPro::FastAction_2<A,B>* TMPro::FastAction_2<A,B>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::FastAction_2<A,B>*>());
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
inline void TMPro::FastAction_2<A,B>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<A,B>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
