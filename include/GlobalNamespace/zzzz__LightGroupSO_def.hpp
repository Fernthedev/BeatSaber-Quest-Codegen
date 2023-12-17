#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupSO)
namespace GlobalNamespace {
class ILightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupSO);
// Type: ::LightGroupSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14511))
// CS Name: ::LightGroupSO*
class CORDL_TYPE LightGroupSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _groupName offset 0x18
 __declspec(property(get=__get__groupName, put=__set__groupName)) ::StringW  _groupName;

/// @brief Field _groupDescription offset 0x20
 __declspec(property(get=__get__groupDescription, put=__set__groupDescription)) ::StringW  _groupDescription;

/// @brief Field _groupId offset 0x28
 __declspec(property(get=__get__groupId, put=__set__groupId)) int32_t  _groupId;

/// @brief Field _startLightId offset 0x2c
 __declspec(property(get=__get__startLightId, put=__set__startLightId)) int32_t  _startLightId;

/// @brief Field _numberOfElements offset 0x30
 __declspec(property(get=__get__numberOfElements, put=__set__numberOfElements)) int32_t  _numberOfElements;

/// @brief Field _sameIdElements offset 0x34
 __declspec(property(get=__get__sameIdElements, put=__set__sameIdElements)) int32_t  _sameIdElements;

/// @brief Field _ignoreLightGroupEffectManager offset 0x38
 __declspec(property(get=__get__ignoreLightGroupEffectManager, put=__set__ignoreLightGroupEffectManager)) bool  _ignoreLightGroupEffectManager;

 __declspec(property(get=get_groupName)) ::StringW  groupName;

 __declspec(property(get=get_groupId)) int32_t  groupId;

 __declspec(property(get=get_startLightId)) int32_t  startLightId;

 __declspec(property(get=get_numberOfElements)) int32_t  numberOfElements;

 __declspec(property(get=get_sameIdElements)) int32_t  sameIdElements;

 __declspec(property(get=get_ignoreLightGroupEffectManager)) bool  ignoreLightGroupEffectManager;

/// @brief Convert operator to "::GlobalNamespace::ILightGroup"
constexpr operator  ::GlobalNamespace::ILightGroup*() noexcept;

constexpr void __set__groupName(::StringW  value) ;

constexpr ::StringW& __get__groupName() ;

constexpr ::StringW const& __get__groupName() const;

constexpr void __set__groupDescription(::StringW  value) ;

constexpr ::StringW& __get__groupDescription() ;

constexpr ::StringW const& __get__groupDescription() const;

constexpr void __set__groupId(int32_t  value) ;

constexpr int32_t& __get__groupId() ;

constexpr int32_t const& __get__groupId() const;

constexpr void __set__startLightId(int32_t  value) ;

constexpr int32_t& __get__startLightId() ;

constexpr int32_t const& __get__startLightId() const;

constexpr void __set__numberOfElements(int32_t  value) ;

constexpr int32_t& __get__numberOfElements() ;

constexpr int32_t const& __get__numberOfElements() const;

constexpr void __set__sameIdElements(int32_t  value) ;

constexpr int32_t& __get__sameIdElements() ;

constexpr int32_t const& __get__sameIdElements() const;

constexpr void __set__ignoreLightGroupEffectManager(bool  value) ;

constexpr bool& __get__ignoreLightGroupEffectManager() ;

constexpr bool const& __get__ignoreLightGroupEffectManager() const;

/// @brief Method get_groupName addr 0x210e344 size 0x8 virtual true final true
inline ::StringW get_groupName() ;

/// @brief Method get_groupId addr 0x210e34c size 0x8 virtual true final true
inline int32_t get_groupId() ;

/// @brief Method get_startLightId addr 0x210e354 size 0x8 virtual true final true
inline int32_t get_startLightId() ;

/// @brief Method get_numberOfElements addr 0x210e35c size 0x8 virtual true final true
inline int32_t get_numberOfElements() ;

/// @brief Method get_sameIdElements addr 0x210e364 size 0x8 virtual true final true
inline int32_t get_sameIdElements() ;

/// @brief Method get_ignoreLightGroupEffectManager addr 0x210e36c size 0x8 virtual true final true
inline bool get_ignoreLightGroupEffectManager() ;

static inline ::GlobalNamespace::LightGroupSO* New_ctor() ;

/// @brief Method .ctor addr 0x210e374 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightGroupSO(LightGroupSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightGroupSO(LightGroupSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightGroupSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupSO, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSO*, "", "LightGroupSO");
