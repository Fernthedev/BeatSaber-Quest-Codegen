#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ThreadAndSerializationSafeAttribute)
// Forward declare root types
namespace UnityEngine {
class ThreadAndSerializationSafeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ThreadAndSerializationSafeAttribute);
// Type: UnityEngine::ThreadAndSerializationSafeAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16005))
// CS Name: ::UnityEngine::ThreadAndSerializationSafeAttribute*
class CORDL_TYPE ThreadAndSerializationSafeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::ThreadAndSerializationSafeAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2d18048 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadAndSerializationSafeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadAndSerializationSafeAttribute(ThreadAndSerializationSafeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadAndSerializationSafeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadAndSerializationSafeAttribute(ThreadAndSerializationSafeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadAndSerializationSafeAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ThreadAndSerializationSafeAttribute, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ThreadAndSerializationSafeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ThreadAndSerializationSafeAttribute*, "UnityEngine", "ThreadAndSerializationSafeAttribute");
