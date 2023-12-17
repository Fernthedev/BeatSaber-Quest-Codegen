#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoListItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::MonoListItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoListItem::*)()>(&::System::MonoListItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25fe304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoListItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::MonoListItem::__set_next(::System::MonoListItem*  value)  {
::cordl_internals::setInstanceField<::System::MonoListItem*, 0x10>(this, std::forward<::System::MonoListItem*>(value));
}
constexpr ::System::MonoListItem* System::MonoListItem::__get_next()  {
return ::cordl_internals::getInstanceField<::System::MonoListItem*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::MonoListItem*> System::MonoListItem::__get_next() const {
return ::cordl_internals::getInstanceField<::System::MonoListItem*, 0x10>(this);
}
constexpr void System::MonoListItem::__set_data(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::MonoListItem::__get_data()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::MonoListItem::__get_data() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
inline ::System::MonoListItem* System::MonoListItem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::MonoListItem*>());
}
inline void System::MonoListItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoListItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
