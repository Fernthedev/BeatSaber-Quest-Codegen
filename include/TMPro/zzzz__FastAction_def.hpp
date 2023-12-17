#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FastAction)
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
namespace System {
class Action;
}
// Forward declare root types
namespace TMPro {
class FastAction;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::FastAction);
// Type: TMPro::FastAction
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12297))
// CS Name: ::TMPro::FastAction*
class CORDL_TYPE FastAction : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field delegates offset 0x10
 __declspec(property(get=__get_delegates, put=__set_delegates)) ::System::Collections::Generic::LinkedList_1<::System::Action*>*  delegates;

/// @brief Field lookup offset 0x18
 __declspec(property(get=__get_lookup, put=__set_lookup)) ::System::Collections::Generic::Dictionary_2<::System::Action*,::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*  lookup;

constexpr void __set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action*>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>* __get_delegates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action*>*> __get_delegates() const;

constexpr void __set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action*,::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*,::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* __get_lookup() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Action*,::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*> __get_lookup() const;

/// @brief Method Add addr 0x2bef0e0 size 0xc0 virtual false final false
inline void Add(::System::Action*  rhs) ;

/// @brief Method Remove addr 0x2bef1a0 size 0xc0 virtual false final false
inline void Remove(::System::Action*  rhs) ;

/// @brief Method Call addr 0x2bef260 size 0x98 virtual false final false
inline void Call() ;

static inline ::TMPro::FastAction* New_ctor() ;

/// @brief Method .ctor addr 0x2bef2f8 size 0xc0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FastAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastAction(FastAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastAction(FastAction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FastAction()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::FastAction, 0x20>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::FastAction);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FastAction*, "TMPro", "FastAction");
