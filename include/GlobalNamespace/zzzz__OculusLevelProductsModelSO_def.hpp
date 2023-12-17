#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusLevelProductsModelSO)
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelProductData;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackRedirectionData;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData);
// Type: ::LevelProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4538))
// CS Name: ::OculusLevelProductsModelSO::LevelProductData*
class CORDL_TYPE __OculusLevelProductsModelSO__LevelProductData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _levelId offset 0x10
 __declspec(property(get=__get__levelId, put=__set__levelId)) ::StringW  _levelId;

/// @brief Field _sku offset 0x18
 __declspec(property(get=__get__sku, put=__set__sku)) ::StringW  _sku;

 __declspec(property(get=get_sku)) ::StringW  sku;

 __declspec(property(get=get_levelId)) ::StringW  levelId;

 __declspec(property(get=get_assetFile)) ::StringW  assetFile;

constexpr void __set__levelId(::StringW  value) ;

constexpr ::StringW& __get__levelId() ;

constexpr ::StringW const& __get__levelId() const;

constexpr void __set__sku(::StringW  value) ;

constexpr ::StringW& __get__sku() ;

constexpr ::StringW const& __get__sku() const;

/// @brief Method get_sku addr 0x236784c size 0x8 virtual false final false
inline ::StringW get_sku() ;

/// @brief Method get_levelId addr 0x2367854 size 0x8 virtual false final false
inline ::StringW get_levelId() ;

/// @brief Method get_assetFile addr 0x2365cc4 size 0x1c virtual false final false
inline ::StringW get_assetFile() ;

static inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData* New_ctor() ;

/// @brief Method .ctor addr 0x236785c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelProductData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusLevelProductsModelSO__LevelProductData(__OculusLevelProductsModelSO__LevelProductData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelProductData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusLevelProductsModelSO__LevelProductData(__OculusLevelProductsModelSO__LevelProductData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusLevelProductsModelSO__LevelProductData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelPackProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4539))
// CS Name: ::OculusLevelProductsModelSO::LevelPackProductData*
class CORDL_TYPE __OculusLevelProductsModelSO__LevelPackProductData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _sku offset 0x10
 __declspec(property(get=__get__sku, put=__set__sku)) ::StringW  _sku;

/// @brief Field _levelPackId offset 0x18
 __declspec(property(get=__get__levelPackId, put=__set__levelPackId)) ::StringW  _levelPackId;

/// @brief Field _levelProductsData offset 0x20
 __declspec(property(get=__get__levelProductsData, put=__set__levelProductsData)) ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*>  _levelProductsData;

 __declspec(property(get=get_sku)) ::StringW  sku;

 __declspec(property(get=get_levelPackId)) ::StringW  levelPackId;

 __declspec(property(get=get_levelProductsData)) ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*>  levelProductsData;

constexpr void __set__sku(::StringW  value) ;

constexpr ::StringW& __get__sku() ;

constexpr ::StringW const& __get__sku() const;

constexpr void __set__levelPackId(::StringW  value) ;

constexpr ::StringW& __get__levelPackId() ;

constexpr ::StringW const& __get__levelPackId() const;

constexpr void __set__levelProductsData(::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*>& __get__levelProductsData() ;

constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> const& __get__levelProductsData() const;

/// @brief Method get_sku addr 0x2367864 size 0x8 virtual false final false
inline ::StringW get_sku() ;

/// @brief Method get_levelPackId addr 0x236786c size 0x8 virtual false final false
inline ::StringW get_levelPackId() ;

/// @brief Method get_levelProductsData addr 0x2367874 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> get_levelProductsData() ;

static inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData* New_ctor() ;

/// @brief Method .ctor addr 0x236787c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelPackProductData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusLevelProductsModelSO__LevelPackProductData(__OculusLevelProductsModelSO__LevelPackProductData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelPackProductData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusLevelProductsModelSO__LevelPackProductData(__OculusLevelProductsModelSO__LevelPackProductData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusLevelProductsModelSO__LevelPackProductData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelPackRedirectionData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4540))
// CS Name: ::OculusLevelProductsModelSO::LevelPackRedirectionData*
class CORDL_TYPE __OculusLevelProductsModelSO__LevelPackRedirectionData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _targetLevelPackId offset 0x10
 __declspec(property(get=__get__targetLevelPackId, put=__set__targetLevelPackId)) ::StringW  _targetLevelPackId;

/// @brief Field _shouldOwnLevelPackId offset 0x18
 __declspec(property(get=__get__shouldOwnLevelPackId, put=__set__shouldOwnLevelPackId)) ::StringW  _shouldOwnLevelPackId;

/// @brief Field _redirectedSku offset 0x20
 __declspec(property(get=__get__redirectedSku, put=__set__redirectedSku)) ::StringW  _redirectedSku;

/// @brief Field _validUntilDate offset 0x28
 __declspec(property(get=__get__validUntilDate, put=__set__validUntilDate)) ::StringW  _validUntilDate;

 __declspec(property(get=get_targetLevelPackId)) ::StringW  targetLevelPackId;

 __declspec(property(get=get_shouldOwnLevelPackId)) ::StringW  shouldOwnLevelPackId;

 __declspec(property(get=get_redirectedSku)) ::StringW  redirectedSku;

 __declspec(property(get=get_validUntilDate)) ::StringW  validUntilDate;

constexpr void __set__targetLevelPackId(::StringW  value) ;

constexpr ::StringW& __get__targetLevelPackId() ;

constexpr ::StringW const& __get__targetLevelPackId() const;

constexpr void __set__shouldOwnLevelPackId(::StringW  value) ;

constexpr ::StringW& __get__shouldOwnLevelPackId() ;

constexpr ::StringW const& __get__shouldOwnLevelPackId() const;

constexpr void __set__redirectedSku(::StringW  value) ;

constexpr ::StringW& __get__redirectedSku() ;

constexpr ::StringW const& __get__redirectedSku() const;

constexpr void __set__validUntilDate(::StringW  value) ;

constexpr ::StringW& __get__validUntilDate() ;

constexpr ::StringW const& __get__validUntilDate() const;

/// @brief Method get_targetLevelPackId addr 0x2367884 size 0x8 virtual false final false
inline ::StringW get_targetLevelPackId() ;

/// @brief Method get_shouldOwnLevelPackId addr 0x236788c size 0x8 virtual false final false
inline ::StringW get_shouldOwnLevelPackId() ;

/// @brief Method get_redirectedSku addr 0x2367894 size 0x8 virtual false final false
inline ::StringW get_redirectedSku() ;

/// @brief Method get_validUntilDate addr 0x236789c size 0x8 virtual false final false
inline ::StringW get_validUntilDate() ;

static inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData* New_ctor() ;

/// @brief Method .ctor addr 0x23678a4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelPackRedirectionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusLevelProductsModelSO__LevelPackRedirectionData(__OculusLevelProductsModelSO__LevelPackRedirectionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelPackRedirectionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusLevelProductsModelSO__LevelPackRedirectionData(__OculusLevelProductsModelSO__LevelPackRedirectionData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusLevelProductsModelSO__LevelPackRedirectionData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OculusLevelProductsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4541))
// CS Name: ::OculusLevelProductsModelSO*
class CORDL_TYPE OculusLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LevelPackRedirectionData = ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData;

using LevelPackProductData = ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData;

using LevelProductData = ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _levelPackProductsData offset 0x18
 __declspec(property(get=__get__levelPackProductsData, put=__set__levelPackProductsData)) ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*>  _levelPackProductsData;

/// @brief Field _levelPackRedirectionData offset 0x20
 __declspec(property(get=__get__levelPackRedirectionData, put=__set__levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*>  _levelPackRedirectionData;

 __declspec(property(get=get_levelPackProductsData)) ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*>  levelPackProductsData;

 __declspec(property(get=get_levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*>  levelPackRedirectionData;

constexpr void __set__levelPackProductsData(::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*>& __get__levelPackProductsData() ;

constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> const& __get__levelPackProductsData() const;

constexpr void __set__levelPackRedirectionData(::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*>& __get__levelPackRedirectionData() ;

constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*> const& __get__levelPackRedirectionData() const;

/// @brief Method get_levelPackProductsData addr 0x23677b0 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> get_levelPackProductsData() ;

/// @brief Method get_levelPackRedirectionData addr 0x23677b8 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*,::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*> get_levelPackRedirectionData() ;

static inline ::GlobalNamespace::OculusLevelProductsModelSO* New_ctor() ;

/// @brief Method .ctor addr 0x23677c0 size 0x8c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductsModelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusLevelProductsModelSO(OculusLevelProductsModelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductsModelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusLevelProductsModelSO(OculusLevelProductsModelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusLevelProductsModelSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductsModelSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductsModelSO*, "", "OculusLevelProductsModelSO");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*, "", "OculusLevelProductsModelSO/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*, "", "OculusLevelProductsModelSO/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*, "", "OculusLevelProductsModelSO/LevelProductData");
