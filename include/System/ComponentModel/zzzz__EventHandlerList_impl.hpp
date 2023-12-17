#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void System::ComponentModel::__EventHandlerList__ListEntry::__set__next(::System::ComponentModel::__EventHandlerList__ListEntry*  value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::__EventHandlerList__ListEntry*, 0x10>(this, std::forward<::System::ComponentModel::__EventHandlerList__ListEntry*>(value));
}
constexpr ::System::ComponentModel::__EventHandlerList__ListEntry* System::ComponentModel::__EventHandlerList__ListEntry::__get__next()  {
return ::cordl_internals::getInstanceField<::System::ComponentModel::__EventHandlerList__ListEntry*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__EventHandlerList__ListEntry*> System::ComponentModel::__EventHandlerList__ListEntry::__get__next() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::__EventHandlerList__ListEntry*, 0x10>(this);
}
constexpr void System::ComponentModel::__EventHandlerList__ListEntry::__set__key(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::ComponentModel::__EventHandlerList__ListEntry::__get__key()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::ComponentModel::__EventHandlerList__ListEntry::__get__key() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void System::ComponentModel::__EventHandlerList__ListEntry::__set__handler(::System::Delegate*  value)  {
::cordl_internals::setInstanceField<::System::Delegate*, 0x20>(this, std::forward<::System::Delegate*>(value));
}
constexpr ::System::Delegate* System::ComponentModel::__EventHandlerList__ListEntry::__get__handler()  {
return ::cordl_internals::getInstanceField<::System::Delegate*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> System::ComponentModel::__EventHandlerList__ListEntry::__get__handler() const {
return ::cordl_internals::getInstanceField<::System::Delegate*, 0x20>(this);
}
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::System::ComponentModel::EventHandlerList::*)(::System::Object*)>(&::System::ComponentModel::EventHandlerList::get_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2904dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventHandlerList*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__EventHandlerList__ListEntry* (::System::ComponentModel::EventHandlerList::*)(::System::Object*)>(&::System::ComponentModel::EventHandlerList::Find)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2904e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventHandlerList*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::EventHandlerList::__set__head(::System::ComponentModel::__EventHandlerList__ListEntry*  value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::__EventHandlerList__ListEntry*, 0x10>(this, std::forward<::System::ComponentModel::__EventHandlerList__ListEntry*>(value));
}
constexpr ::System::ComponentModel::__EventHandlerList__ListEntry* System::ComponentModel::EventHandlerList::__get__head()  {
return ::cordl_internals::getInstanceField<::System::ComponentModel::__EventHandlerList__ListEntry*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__EventHandlerList__ListEntry*> System::ComponentModel::EventHandlerList::__get__head() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::__EventHandlerList__ListEntry*, 0x10>(this);
}
constexpr void System::ComponentModel::EventHandlerList::__set__parent(::System::ComponentModel::Component*  value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::Component*, 0x18>(this, std::forward<::System::ComponentModel::Component*>(value));
}
constexpr ::System::ComponentModel::Component* System::ComponentModel::EventHandlerList::__get__parent()  {
return ::cordl_internals::getInstanceField<::System::ComponentModel::Component*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Component*> System::ComponentModel::EventHandlerList::__get__parent() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::Component*, 0x18>(this);
}
inline ::System::Delegate* System::ComponentModel::EventHandlerList::get_Item(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventHandlerList*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(*this, ___internal_method, key);
}
inline ::System::ComponentModel::__EventHandlerList__ListEntry* System::ComponentModel::EventHandlerList::Find(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventHandlerList*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__EventHandlerList__ListEntry*, false>(*this, ___internal_method, key);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
