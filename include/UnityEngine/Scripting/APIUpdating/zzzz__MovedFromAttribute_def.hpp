#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MovedFromAttribute)
namespace UnityEngine::Scripting::APIUpdating {
struct MovedFromAttributeData;
}
// Forward declare root types
namespace UnityEngine::Scripting::APIUpdating {
class MovedFromAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute);
// Type: UnityEngine.Scripting.APIUpdating::MovedFromAttribute
namespace UnityEngine::Scripting::APIUpdating {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10321))
// CS Name: ::UnityEngine.Scripting.APIUpdating::MovedFromAttribute*
class CORDL_TYPE MovedFromAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Attribute)]{};

/// @brief Field data offset 0x10
 __declspec(property(get=__get_data, put=__set_data)) ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData  data;

constexpr void __set_data(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData  value) ;

constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData& __get_data() ;

constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData const& __get_data() const;

static inline ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* New_ctor(bool  autoUpdateAPI, ::StringW  sourceNamespace, ::StringW  sourceAssembly, ::StringW  sourceClassName) ;

/// @brief Method .ctor addr 0x2ce9dd4 size 0x6c virtual false final false
inline void _ctor(bool  autoUpdateAPI, ::StringW  sourceNamespace, ::StringW  sourceAssembly, ::StringW  sourceClassName) ;

static inline ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* New_ctor(::StringW  sourceNamespace) ;

/// @brief Method .ctor addr 0x2ce9e40 size 0x44 virtual false final false
inline void _ctor(::StringW  sourceNamespace) ;

// Ctor Parameters [CppParam { name: "", ty: "MovedFromAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MovedFromAttribute(MovedFromAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MovedFromAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MovedFromAttribute(MovedFromAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MovedFromAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::Scripting::APIUpdating
NEED_NO_BOX(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*, "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
