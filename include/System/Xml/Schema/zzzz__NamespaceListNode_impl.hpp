#pragma once
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_impl.hpp"
#include "System/Xml/Schema/zzzz__NamespaceListNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceListNode::*)(::System::Xml::Schema::NamespaceList*, ::System::Object*)>(&::System::Xml::Schema::NamespaceListNode::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28adc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode.GetResolvedSymbols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::NamespaceListNode::*)(::System::Xml::Schema::SymbolsDictionary*)>(&::System::Xml::Schema::NamespaceListNode::GetResolvedSymbols)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28adc8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode.ExpandTree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceListNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&::System::Xml::Schema::NamespaceListNode::ExpandTree)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x28adcac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode.ConstructPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceListNode::*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>)>(&::System::Xml::Schema::NamespaceListNode::ConstructPos)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28ae12c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode.get_IsNullable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::NamespaceListNode::*)()>(&::System::Xml::Schema::NamespaceListNode::get_IsNullable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28ae16c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::NamespaceListNode::__set_namespaceList(::System::Xml::Schema::NamespaceList*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::NamespaceList*, 0x10>(this, std::forward<::System::Xml::Schema::NamespaceList*>(value));
}
constexpr ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceListNode::__get_namespaceList()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::NamespaceList*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::NamespaceList*> System::Xml::Schema::NamespaceListNode::__get_namespaceList() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::NamespaceList*, 0x10>(this);
}
constexpr void System::Xml::Schema::NamespaceListNode::__set_particle(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::NamespaceListNode::__get_particle()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::NamespaceListNode::__get_particle() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
inline ::System::Xml::Schema::NamespaceListNode* System::Xml::Schema::NamespaceListNode::New_ctor(::System::Xml::Schema::NamespaceList*  namespaceList, ::System::Object*  particle)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::NamespaceListNode*>(namespaceList, particle));
}
inline void System::Xml::Schema::NamespaceListNode::_ctor(::System::Xml::Schema::NamespaceList*  namespaceList, ::System::Object*  particle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, namespaceList, particle);
}
inline ::System::Collections::ICollection* System::Xml::Schema::NamespaceListNode::GetResolvedSymbols(::System::Xml::Schema::SymbolsDictionary*  symbols)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                            "GetResolvedSymbols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(*this, ___internal_method, symbols);
}
inline void System::Xml::Schema::NamespaceListNode::ExpandTree(::System::Xml::Schema::InteriorNode*  parent, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                            "ExpandTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::InteriorNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parent, symbols, positions);
}
inline void System::Xml::Schema::NamespaceListNode::ConstructPos(::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                            "ConstructPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstpos, lastpos, followpos);
}
inline bool System::Xml::Schema::NamespaceListNode::get_IsNullable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                            "get_IsNullable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
