#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EditAvatarHistorySnapshot)
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
struct EditAvatarHistorySnapshot;
}
// Write type traits
MARK_VAL_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot);
// Type: BeatSaber.BeatAvatarAdapter.AvatarEditor::EditAvatarHistorySnapshot
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15271))
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::EditAvatarHistorySnapshot
struct CORDL_TYPE EditAvatarHistorySnapshot : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field avatarEditPart offset 0x0
 __declspec(property(get=__get_avatarEditPart, put=__set_avatarEditPart)) ::BeatSaber::BeatAvatarSDK::AvatarPart  avatarEditPart;

/// @brief Field avatarData offset 0x8
 __declspec(property(get=__get_avatarData, put=__set_avatarData)) ::BeatSaber::BeatAvatarSDK::AvatarData*  avatarData;

constexpr void __set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __get_avatarEditPart() ;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __get_avatarEditPart() const;

constexpr void __set_avatarData(::BeatSaber::BeatAvatarSDK::AvatarData*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarData* __get_avatarData() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarData*> __get_avatarData() const;

/// @brief Method .ctor addr 0xe14ef0 size 0xc virtual false final false
inline void _ctor(::BeatSaber::BeatAvatarSDK::AvatarData*  avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPart  avatarEditPart) ;

// Ctor Parameters [CppParam { name: "avatarEditPart", ty: "::BeatSaber::BeatAvatarSDK::AvatarPart", modifiers: "", def_value: None }, CppParam { name: "avatarData", ty: "::BeatSaber::BeatAvatarSDK::AvatarData*", modifiers: "", def_value: None }]
constexpr EditAvatarHistorySnapshot(::BeatSaber::BeatAvatarSDK::AvatarPart  avatarEditPart, ::BeatSaber::BeatAvatarSDK::AvatarData*  avatarData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EditAvatarHistorySnapshot(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EditAvatarHistorySnapshot()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot, 0x10>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarAdapter::AvatarEditor
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "EditAvatarHistorySnapshot");
