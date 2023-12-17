#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AvatarPartSO_1)
namespace BeatSaber::BeatAvatarSDK {
class IAvatarPart;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
template<typename T>
class AvatarPartSO_1;
}
namespace BeatSaber::BeatAvatarSDK {
template<::il2cpp_utils::il2cpp_reference_type T>
class AvatarPartSO_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarPartSO_1);
// Type: BeatSaber.BeatAvatarSDK::AvatarPartSO`1
// Type: BeatSaber.BeatAvatarSDK::AvatarPartSO`1
namespace BeatSaber::BeatAvatarSDK {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15687)), TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15687), inst: 2 })
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarPartSO`1<T>*
class CORDL_TYPE AvatarPartSO_1<T> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _id offset 0x18
 __declspec(property(get=__get__id, put=__set__id)) ::StringW  _id;

/// @brief Field _localizationKey offset 0x20
 __declspec(property(get=__get__localizationKey, put=__set__localizationKey)) ::StringW  _localizationKey;

/// @brief Field _partAsset offset 0x28
 __declspec(property(get=__get__partAsset, put=__set__partAsset)) T  _partAsset;

 __declspec(property(get=get_partAsset)) T  partAsset;

 __declspec(property(get=get_id)) ::StringW  id;

 __declspec(property(get=get_localizationKey)) ::StringW  localizationKey;

 __declspec(property(get=get_localizedName)) ::StringW  localizedName;

/// @brief Convert operator to "::BeatSaber::BeatAvatarSDK::IAvatarPart"
constexpr operator  ::BeatSaber::BeatAvatarSDK::IAvatarPart*() noexcept;

constexpr void __set__id(::StringW  value) ;

constexpr ::StringW& __get__id() ;

constexpr ::StringW const& __get__id() const;

constexpr void __set__localizationKey(::StringW  value) ;

constexpr ::StringW& __get__localizationKey() ;

constexpr ::StringW const& __get__localizationKey() const;

constexpr void __set__partAsset(T  value) ;

constexpr T& __get__partAsset() ;

constexpr T const& __get__partAsset() const;

/// @brief Method get_partAsset addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_partAsset() ;

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW get_id() ;

/// @brief Method get_localizationKey addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_localizationKey() ;

/// @brief Method get_localizedName addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW get_localizedName() ;

static inline ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarPartSO_1(AvatarPartSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarPartSO_1(AvatarPartSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarPartSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::BeatAvatarSDK
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatSaber::BeatAvatarSDK::AvatarPartSO_1, "BeatSaber.BeatAvatarSDK", "AvatarPartSO`1");
