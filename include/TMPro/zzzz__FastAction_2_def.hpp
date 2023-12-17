#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FastAction_2)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace TMPro {
template<typename A,typename B>
class FastAction_2;
}
namespace TMPro {
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
class FastAction_2<A,B>;
}
namespace TMPro {
template<::il2cpp_utils::il2cpp_reference_type B>
class FastAction_2<bool,B>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::TMPro::FastAction_2);
// Type: TMPro::FastAction`2
// Type: TMPro::FastAction`2
namespace TMPro {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type B>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12299)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12299), inst: 1006 })
// CS Name: ::TMPro::FastAction`2<A,B>*
class CORDL_TYPE FastAction_2<bool,B> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field delegates offset 0x10
 __declspec(property(get=__get_delegates, put=__set_delegates)) ::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*  delegates;

/// @brief Field lookup offset 0x18
 __declspec(property(get=__get_lookup, put=__set_lookup)) ::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*  lookup;

constexpr void __set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>* __get_delegates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_2<bool,B>*>*> __get_delegates() const;

constexpr void __set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>* __get_lookup() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Action_2<bool,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<bool,B>*>*>*> __get_lookup() const;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::System::Action_2<bool,B>*  rhs) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Action_2<bool,B>*  rhs) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Call(bool  a, B  b) ;

static inline ::TMPro::FastAction_2<bool,B>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastAction_2(FastAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastAction_2(FastAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FastAction_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::FastAction`2
namespace TMPro {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12299))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12299), inst: 81 })
// CS Name: ::TMPro::FastAction`2<A,B>*
class CORDL_TYPE FastAction_2<A,B> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field delegates offset 0x10
 __declspec(property(get=__get_delegates, put=__set_delegates)) ::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*  delegates;

/// @brief Field lookup offset 0x18
 __declspec(property(get=__get_lookup, put=__set_lookup)) ::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*  lookup;

constexpr void __set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>* __get_delegates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*> __get_delegates() const;

constexpr void __set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>* __get_lookup() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*> __get_lookup() const;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::System::Action_2<A,B>*  rhs) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Action_2<A,B>*  rhs) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Call(A  a, B  b) ;

static inline ::TMPro::FastAction_2<A,B>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastAction_2(FastAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastAction_2(FastAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FastAction_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::FastAction_2, "TMPro", "FastAction`2");
