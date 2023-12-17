#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DefaultDllImportSearchPathsAttribute)
namespace System::Runtime::InteropServices {
struct DllImportSearchPath;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class DefaultDllImportSearchPathsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute);
// Type: System.Runtime.InteropServices::DefaultDllImportSearchPathsAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3329))
// CS Name: ::System.Runtime.InteropServices::DefaultDllImportSearchPathsAttribute*
class CORDL_TYPE DefaultDllImportSearchPathsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _paths offset 0x10
 __declspec(property(get=__get__paths, put=__set__paths)) ::System::Runtime::InteropServices::DllImportSearchPath  _paths;

constexpr void __set__paths(::System::Runtime::InteropServices::DllImportSearchPath  value) ;

constexpr ::System::Runtime::InteropServices::DllImportSearchPath& __get__paths() ;

constexpr ::System::Runtime::InteropServices::DllImportSearchPath const& __get__paths() const;

static inline ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute* New_ctor(::System::Runtime::InteropServices::DllImportSearchPath  paths) ;

/// @brief Method .ctor addr 0x24d72e8 size 0x28 virtual false final false
inline void _ctor(::System::Runtime::InteropServices::DllImportSearchPath  paths) ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDllImportSearchPathsAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultDllImportSearchPathsAttribute(DefaultDllImportSearchPathsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDllImportSearchPathsAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultDllImportSearchPathsAttribute(DefaultDllImportSearchPathsAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultDllImportSearchPathsAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*, "System.Runtime.InteropServices", "DefaultDllImportSearchPathsAttribute");
