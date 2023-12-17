#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Comments)
// Forward declare root types
namespace RootMotion {
class Comments;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::Comments);
// Type: RootMotion::Comments
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12489))
// CS Name: ::RootMotion::Comments*
class CORDL_TYPE Comments : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field text offset 0x18
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

static inline ::RootMotion::Comments* New_ctor() ;

/// @brief Method .ctor addr 0x123ccd8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Comments", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Comments(Comments && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Comments", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Comments(Comments const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Comments()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Comments, 0x20>, "Size mismatch!");

} // namespace end def RootMotion
NEED_NO_BOX(::RootMotion::Comments);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Comments*, "RootMotion", "Comments");
