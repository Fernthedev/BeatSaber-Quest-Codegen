#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Marvin)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class Marvin;
}
// Write type traits
MARK_REF_PTR_T(::System::Marvin);
// Type: System::Marvin
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2434))
// CS Name: ::System::Marvin*
class CORDL_TYPE Marvin : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__DefaultSeed_k__BackingField(uint64_t  value) ;

static inline uint64_t getStaticF__DefaultSeed_k__BackingField() ;

/// @brief Method ComputeHash32 addr 0x25ae0d0 size 0xac virtual false final false
static inline int32_t ComputeHash32(::System::ReadOnlySpan_1<uint8_t>  data, uint64_t  seed) ;

/// @brief Method ComputeHash32 addr 0x25ae17c size 0x3d0 virtual false final false
static inline int32_t ComputeHash32(ByRef<uint8_t>  data, int32_t  count, uint64_t  seed) ;

/// @brief Method Block addr 0x25ae54c size 0x88 virtual false final false
static inline void Block(ByRef<uint32_t>  rp0, ByRef<uint32_t>  rp1) ;

/// @brief Method _rotl addr 0x25ae5d4 size 0xc virtual false final false
static inline uint32_t _rotl(uint32_t  value, int32_t  shift) ;

/// @brief Method get_DefaultSeed addr 0x25ae5e0 size 0x58 virtual false final false
static inline uint64_t get_DefaultSeed() ;

/// @brief Method GenerateSeed addr 0x25ae638 size 0xc virtual false final false
static inline uint64_t GenerateSeed() ;

// Ctor Parameters [CppParam { name: "", ty: "Marvin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Marvin(Marvin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marvin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marvin(Marvin const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Marvin()  = default;
public:


// Fields

// Static field <DefaultSeed>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Marvin, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Marvin);
DEFINE_IL2CPP_ARG_TYPE(::System::Marvin*, "System", "Marvin");
