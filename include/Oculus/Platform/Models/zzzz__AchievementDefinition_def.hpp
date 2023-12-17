#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementDefinition)
namespace Oculus::Platform {
struct AchievementType;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementDefinition;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AchievementDefinition);
// Type: Oculus.Platform.Models::AchievementDefinition
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13407))
// CS Name: ::Oculus.Platform.Models::AchievementDefinition*
class CORDL_TYPE AchievementDefinition : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field Type offset 0x10
 __declspec(property(get=__get_Type, put=__set_Type)) ::Oculus::Platform::AchievementType  Type;

/// @brief Field Name offset 0x18
 __declspec(property(get=__get_Name, put=__set_Name)) ::StringW  Name;

/// @brief Field BitfieldLength offset 0x20
 __declspec(property(get=__get_BitfieldLength, put=__set_BitfieldLength)) uint32_t  BitfieldLength;

/// @brief Field Target offset 0x28
 __declspec(property(get=__get_Target, put=__set_Target)) uint64_t  Target;

constexpr void __set_Type(::Oculus::Platform::AchievementType  value) ;

constexpr ::Oculus::Platform::AchievementType& __get_Type() ;

constexpr ::Oculus::Platform::AchievementType const& __get_Type() const;

constexpr void __set_Name(::StringW  value) ;

constexpr ::StringW& __get_Name() ;

constexpr ::StringW const& __get_Name() const;

constexpr void __set_BitfieldLength(uint32_t  value) ;

constexpr uint32_t& __get_BitfieldLength() ;

constexpr uint32_t const& __get_BitfieldLength() const;

constexpr void __set_Target(uint64_t  value) ;

constexpr uint64_t& __get_Target() ;

constexpr uint64_t const& __get_Target() const;

static inline ::Oculus::Platform::Models::AchievementDefinition* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2703740 size 0xa8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AchievementDefinition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AchievementDefinition(AchievementDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AchievementDefinition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AchievementDefinition(AchievementDefinition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AchievementDefinition()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AchievementDefinition, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AchievementDefinition);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementDefinition*, "Oculus.Platform.Models", "AchievementDefinition");
