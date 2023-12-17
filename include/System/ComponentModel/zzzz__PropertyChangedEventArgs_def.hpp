#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PropertyChangedEventArgs)
// Forward declare root types
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyChangedEventArgs);
// Type: System.ComponentModel::PropertyChangedEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9466))
// CS Name: ::System.ComponentModel::PropertyChangedEventArgs*
class CORDL_TYPE PropertyChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::EventArgs)]{};

/// @brief Field _propertyName offset 0x10
 __declspec(property(get=__get__propertyName, put=__set__propertyName)) ::StringW  _propertyName;

constexpr void __set__propertyName(::StringW  value) ;

constexpr ::StringW& __get__propertyName() ;

constexpr ::StringW const& __get__propertyName() const;

static inline ::System::ComponentModel::PropertyChangedEventArgs* New_ctor(::StringW  propertyName) ;

/// @brief Method .ctor addr 0x29199b0 size 0x6c virtual false final false
inline void _ctor(::StringW  propertyName) ;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyChangedEventArgs(PropertyChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyChangedEventArgs(PropertyChangedEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PropertyChangedEventArgs()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyChangedEventArgs, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangedEventArgs*, "System.ComponentModel", "PropertyChangedEventArgs");
