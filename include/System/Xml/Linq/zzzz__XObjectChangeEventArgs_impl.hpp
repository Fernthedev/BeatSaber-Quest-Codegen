#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Linq/zzzz__XObjectChangeEventArgs_def.hpp"
#include "System/Xml/Linq/zzzz__XObjectChange_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XObjectChangeEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::XObjectChangeEventArgs::*)(::System::Xml::Linq::XObjectChange)>(&::System::Xml::Linq::XObjectChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2861374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XObjectChange>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Linq::XObjectChangeEventArgs::__set__objectChange(::System::Xml::Linq::XObjectChange  value)  {
::cordl_internals::setInstanceField<::System::Xml::Linq::XObjectChange, 0x10>(this, std::forward<::System::Xml::Linq::XObjectChange>(value));
}
constexpr ::System::Xml::Linq::XObjectChange& System::Xml::Linq::XObjectChangeEventArgs::__get__objectChange()  {
return ::cordl_internals::getInstanceField<::System::Xml::Linq::XObjectChange, 0x10>(this);
}
constexpr ::System::Xml::Linq::XObjectChange const& System::Xml::Linq::XObjectChangeEventArgs::__get__objectChange() const {
return ::cordl_internals::getInstanceField<::System::Xml::Linq::XObjectChange, 0x10>(this);
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Add(::System::Xml::Linq::XObjectChangeEventArgs*  value)  {
::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Add", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>(std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Add()  {
return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Add", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Remove(::System::Xml::Linq::XObjectChangeEventArgs*  value)  {
::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Remove", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>(std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Remove()  {
return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Remove", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Name(::System::Xml::Linq::XObjectChangeEventArgs*  value)  {
::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Name", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>(std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Name()  {
return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Name", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Value(::System::Xml::Linq::XObjectChangeEventArgs*  value)  {
::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>(std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Value()  {
return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>();
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::New_ctor(::System::Xml::Linq::XObjectChange  objectChange)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Linq::XObjectChangeEventArgs*>(objectChange));
}
inline void System::Xml::Linq::XObjectChangeEventArgs::_ctor(::System::Xml::Linq::XObjectChange  objectChange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XObjectChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, objectChange);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
