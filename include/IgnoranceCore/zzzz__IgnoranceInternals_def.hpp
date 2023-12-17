#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IgnoranceInternals)
// Forward declare root types
namespace IgnoranceCore {
class IgnoranceInternals;
}
// Write type traits
MARK_REF_PTR_T(::IgnoranceCore::IgnoranceInternals);
// Type: IgnoranceCore::IgnoranceInternals
namespace IgnoranceCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15243))
// CS Name: ::IgnoranceCore::IgnoranceInternals*
class CORDL_TYPE IgnoranceInternals : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field Version offset 0x0
static constexpr ::ConstString  Version{u"1.4.0r2 (LTS)"};

/// @brief Field Scheme offset 0x0
static constexpr ::ConstString  Scheme{u"enet"};

/// @brief Field BindAnyAddress offset 0x0
static constexpr ::ConstString  BindAnyAddress{u"::0"};

static inline ::IgnoranceCore::IgnoranceInternals* New_ctor() ;

/// @brief Method .ctor addr 0x21f70d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceInternals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IgnoranceInternals(IgnoranceInternals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceInternals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IgnoranceInternals(IgnoranceInternals const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IgnoranceInternals()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceInternals, 0x10>, "Size mismatch!");

} // namespace end def IgnoranceCore
NEED_NO_BOX(::IgnoranceCore::IgnoranceInternals);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceInternals*, "IgnoranceCore", "IgnoranceInternals");
