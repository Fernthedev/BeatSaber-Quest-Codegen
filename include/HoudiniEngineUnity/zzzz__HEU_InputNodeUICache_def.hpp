#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_InputNodeUICache)
namespace HoudiniEngineUnity {
class __HEU_InputNodeUICache__HEU_InputObjectUICache;
}
namespace HoudiniEngineUnity {
class __HEU_InputNodeUICache__HEU_InputAssetUICache;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache;
}
namespace HoudiniEngineUnity {
class __HEU_InputNodeUICache__HEU_InputAssetUICache;
}
namespace HoudiniEngineUnity {
class __HEU_InputNodeUICache__HEU_InputObjectUICache;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputNodeUICache);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache);
// Type: ::HEU_InputObjectUICache
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9648))
// CS Name: ::HEU_InputNodeUICache::HEU_InputObjectUICache*
class CORDL_TYPE __HEU_InputNodeUICache__HEU_InputObjectUICache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache* New_ctor() ;

/// @brief Method .ctor addr 0x217245c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_InputNodeUICache__HEU_InputObjectUICache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_InputNodeUICache__HEU_InputObjectUICache(__HEU_InputNodeUICache__HEU_InputObjectUICache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_InputNodeUICache__HEU_InputObjectUICache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_InputNodeUICache__HEU_InputObjectUICache(__HEU_InputNodeUICache__HEU_InputObjectUICache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_InputNodeUICache__HEU_InputObjectUICache()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::HEU_InputAssetUICache
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9649))
// CS Name: ::HEU_InputNodeUICache::HEU_InputAssetUICache*
class CORDL_TYPE __HEU_InputNodeUICache__HEU_InputAssetUICache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache* New_ctor() ;

/// @brief Method .ctor addr 0x2172464 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_InputNodeUICache__HEU_InputAssetUICache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_InputNodeUICache__HEU_InputAssetUICache(__HEU_InputNodeUICache__HEU_InputAssetUICache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_InputNodeUICache__HEU_InputAssetUICache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_InputNodeUICache__HEU_InputAssetUICache(__HEU_InputNodeUICache__HEU_InputAssetUICache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_InputNodeUICache__HEU_InputAssetUICache()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputNodeUICache
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9650))
// CS Name: ::HoudiniEngineUnity::HEU_InputNodeUICache*
class CORDL_TYPE HEU_InputNodeUICache : public ::System::Object {
public:
// Declarations
using HEU_InputAssetUICache = ::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache;

using HEU_InputObjectUICache = ::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _inputObjectCache offset 0x10
 __declspec(property(get=__get__inputObjectCache, put=__set__inputObjectCache)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>*  _inputObjectCache;

/// @brief Field _inputAssetCache offset 0x18
 __declspec(property(get=__get__inputAssetCache, put=__set__inputAssetCache)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>*  _inputAssetCache;

constexpr void __set__inputObjectCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>* __get__inputObjectCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>*> __get__inputObjectCache() const;

constexpr void __set__inputAssetCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>* __get__inputAssetCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>*> __get__inputAssetCache() const;

static inline ::HoudiniEngineUnity::HEU_InputNodeUICache* New_ctor() ;

/// @brief Method .ctor addr 0x217239c size 0xc0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputNodeUICache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_InputNodeUICache(HEU_InputNodeUICache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputNodeUICache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_InputNodeUICache(HEU_InputNodeUICache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_InputNodeUICache()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNodeUICache, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputNodeUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNodeUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache/HEU_InputAssetUICache");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache/HEU_InputObjectUICache");
