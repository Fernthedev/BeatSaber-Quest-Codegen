#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoListItem)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class MonoListItem;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoListItem);
// Type: System::MonoListItem
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2609))
// CS Name: ::System::MonoListItem*
class CORDL_TYPE MonoListItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field next offset 0x10
 __declspec(property(get=__get_next, put=__set_next)) ::System::MonoListItem*  next;

/// @brief Field data offset 0x18
 __declspec(property(get=__get_data, put=__set_data)) ::System::Object*  data;

constexpr void __set_next(::System::MonoListItem*  value) ;

constexpr ::System::MonoListItem* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::MonoListItem*> __get_next() const;

constexpr void __set_data(::System::Object*  value) ;

constexpr ::System::Object* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_data() const;

static inline ::System::MonoListItem* New_ctor() ;

/// @brief Method .ctor addr 0x25fe304 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoListItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoListItem(MonoListItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoListItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoListItem(MonoListItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoListItem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoListItem, 0x20>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::MonoListItem);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoListItem*, "System", "MonoListItem");
