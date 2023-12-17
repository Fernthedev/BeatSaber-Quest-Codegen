#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__RuntimeType_def.hpp"
CORDL_MODULE_EXPORT(ReflectionOnlyType)
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace System {
class ReflectionOnlyType;
}
// Write type traits
MARK_REF_PTR_T(::System::ReflectionOnlyType);
// Type: System::ReflectionOnlyType
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2567))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2568))
// CS Name: ::System::ReflectionOnlyType*
class CORDL_TYPE ReflectionOnlyType : public ::System::RuntimeType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::RuntimeType)]{};

 __declspec(property(get=get_TypeHandle)) ::System::RuntimeTypeHandle  TypeHandle;

static inline ::System::ReflectionOnlyType* New_ctor() ;

/// @brief Method .ctor addr 0x25f180c size 0x58 virtual false final false
inline void _ctor() ;

/// @brief Method get_TypeHandle addr 0x25f1864 size 0x58 virtual true final false
inline ::System::RuntimeTypeHandle get_TypeHandle() ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionOnlyType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionOnlyType(ReflectionOnlyType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionOnlyType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionOnlyType(ReflectionOnlyType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionOnlyType()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ReflectionOnlyType, 0x30>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ReflectionOnlyType);
DEFINE_IL2CPP_ARG_TYPE(::System::ReflectionOnlyType*, "System", "ReflectionOnlyType");
