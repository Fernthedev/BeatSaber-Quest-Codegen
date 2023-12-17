#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AddingNewEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AddingNewEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AddingNewEventArgs);
// Type: System.ComponentModel::AddingNewEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11785))
// CS Name: ::System.ComponentModel::AddingNewEventArgs*
class CORDL_TYPE AddingNewEventArgs : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <NewObject>k__BackingField offset 0x10
 __declspec(property(get=__get__NewObject_k__BackingField, put=__set__NewObject_k__BackingField)) ::System::Object*  _NewObject_k__BackingField;

 __declspec(property(get=get_NewObject, put=set_NewObject)) ::System::Object*  NewObject;

constexpr void __set__NewObject_k__BackingField(::System::Object*  value) ;

constexpr ::System::Object* __get__NewObject_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__NewObject_k__BackingField() const;

/// @brief Method get_NewObject addr 0x263da4c size 0x8 virtual false final false
inline ::System::Object* get_NewObject() ;

/// @brief Method set_NewObject addr 0x263da54 size 0x8 virtual false final false
inline void set_NewObject(::System::Object*  value) ;

static inline ::System::ComponentModel::AddingNewEventArgs* New_ctor() ;

/// @brief Method .ctor addr 0x263da5c size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::ComponentModel::AddingNewEventArgs* New_ctor(::System::Object*  newObject) ;

/// @brief Method .ctor addr 0x263da64 size 0x28 virtual false final false
inline void _ctor(::System::Object*  newObject) ;

// Ctor Parameters [CppParam { name: "", ty: "AddingNewEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddingNewEventArgs(AddingNewEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddingNewEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddingNewEventArgs(AddingNewEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AddingNewEventArgs()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AddingNewEventArgs, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AddingNewEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AddingNewEventArgs*, "System.ComponentModel", "AddingNewEventArgs");
