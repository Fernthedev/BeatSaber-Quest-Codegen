#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeLeakDetection)
// Forward declare root types
namespace Unity::Collections {
class NativeLeakDetection;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeLeakDetection);
// Type: Unity.Collections::NativeLeakDetection
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9996))
// CS Name: ::Unity.Collections::NativeLeakDetection*
class CORDL_TYPE NativeLeakDetection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_NativeLeakDetectionMode(int32_t  value) ;

static inline int32_t getStaticF_s_NativeLeakDetectionMode() ;

/// @brief Method Initialize addr 0x2c9df94 size 0x4c virtual false final false
static inline void Initialize() ;

// Ctor Parameters [CppParam { name: "", ty: "NativeLeakDetection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeLeakDetection(NativeLeakDetection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeLeakDetection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeLeakDetection(NativeLeakDetection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeLeakDetection()  = default;
public:


// Fields

// Static field s_NativeLeakDetectionMode


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeLeakDetection, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeLeakDetection);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeLeakDetection*, "Unity.Collections", "NativeLeakDetection");
