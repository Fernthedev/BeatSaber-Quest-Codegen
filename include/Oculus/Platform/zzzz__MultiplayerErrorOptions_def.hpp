#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerErrorOptions)
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
// Forward declare root types
namespace Oculus::Platform {
class MultiplayerErrorOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MultiplayerErrorOptions);
// Type: Oculus.Platform::MultiplayerErrorOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13337))
// CS Name: ::Oculus.Platform::MultiplayerErrorOptions*
class CORDL_TYPE MultiplayerErrorOptions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field Handle offset 0x10
 __declspec(property(get=__get_Handle, put=__set_Handle)) ::cordl_internals::intptr_t  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_Handle() ;

constexpr ::cordl_internals::intptr_t const& __get_Handle() const;

static inline ::Oculus::Platform::MultiplayerErrorOptions* New_ctor() ;

/// @brief Method .ctor addr 0x26f4500 size 0x64 virtual false final false
inline void _ctor() ;

/// @brief Method SetErrorKey addr 0x26f4564 size 0x68 virtual false final false
inline void SetErrorKey(::Oculus::Platform::MultiplayerErrorErrorKey  value) ;

/// @brief Method op_Explicit addr 0x26f45cc size 0x58 virtual false final false
static inline ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::Oculus::Platform::MultiplayerErrorOptions*  options) ;

/// @brief Method Finalize addr 0x26f4624 size 0xd4 virtual true final false
inline void Finalize() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerErrorOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerErrorOptions(MultiplayerErrorOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerErrorOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerErrorOptions(MultiplayerErrorOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerErrorOptions()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MultiplayerErrorOptions, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MultiplayerErrorOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MultiplayerErrorOptions*, "Oculus.Platform", "MultiplayerErrorOptions");
