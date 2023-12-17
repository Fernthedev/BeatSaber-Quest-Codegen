#pragma once
#include "System/Xml/zzzz__XmlNodeList_impl.hpp"
#include "System/Xml/zzzz__XmlChildNodes_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlChildNodes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlChildNodes::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlChildNodes::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2883ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlChildNodes.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlChildNodes::*)()>(&::System::Xml::XmlChildNodes::get_Count)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2883f08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlChildNodes.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Xml::XmlChildNodes::*)()>(&::System::Xml::XmlChildNodes::GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2883f54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlChildNodes::__set_container(::System::Xml::XmlNode*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNode*, 0x10>(this, std::forward<::System::Xml::XmlNode*>(value));
}
constexpr ::System::Xml::XmlNode* System::Xml::XmlChildNodes::__get_container()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNode*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> System::Xml::XmlChildNodes::__get_container() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNode*, 0x10>(this);
}
inline ::System::Xml::XmlChildNodes* System::Xml::XmlChildNodes::New_ctor(::System::Xml::XmlNode*  container)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlChildNodes*>(container));
}
inline void System::Xml::XmlChildNodes::_ctor(::System::Xml::XmlNode*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline int32_t System::Xml::XmlChildNodes::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Xml::XmlChildNodes::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
