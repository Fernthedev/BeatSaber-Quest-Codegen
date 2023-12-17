#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPartCollection_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
template<typename T>
class AvatarPartCollection_1;
}
namespace BeatSaber::BeatAvatarSDK {
template<::il2cpp_utils::il2cpp_reference_type T>
class AvatarPartCollection_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1);
// Type: BeatSaber.BeatAvatarSDK::AvatarPartCollection`1
// Type: BeatSaber.BeatAvatarSDK::AvatarPartCollection`1
namespace BeatSaber::BeatAvatarSDK {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15685)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15685), inst: 2 })
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarPartCollection`1<T>*
class CORDL_TYPE AvatarPartCollection_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _partById offset 0x10
 __declspec(property(get=__get__partById, put=__set__partById)) ::System::Collections::Generic::Dictionary_2<::StringW,T>*  _partById;

/// @brief Field _partIndexById offset 0x18
 __declspec(property(get=__get__partIndexById, put=__set__partIndexById)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _partIndexById;

/// @brief Field _parts offset 0x20
 __declspec(property(get=__get__parts, put=__set__parts)) ::ArrayW<T,::Array<T>*>  _parts;

 __declspec(property(get=get_count)) int32_t  count;

 __declspec(property(get=get_parts)) ::ArrayW<T,::Array<T>*>  parts;

constexpr void __set__partById(::System::Collections::Generic::Dictionary_2<::StringW,T>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,T>* __get__partById() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,T>*> __get__partById() const;

constexpr void __set__partIndexById(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* __get__partIndexById() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*> __get__partIndexById() const;

constexpr void __set__parts(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__parts() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__parts() const;

/// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_count() ;

/// @brief Method get_parts addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> get_parts() ;

static inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* New_ctor(::ArrayW<T,::Array<T>*>  parts) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  parts) ;

/// @brief Method GetById addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetById(::StringW  id) ;

/// @brief Method GetRandom addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetRandom() ;

/// @brief Method GetByIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetByIndex(int32_t  index) ;

/// @brief Method GetIndexById addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetIndexById(::StringW  id) ;

/// @brief Method GetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetDefault() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartCollection_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarPartCollection_1(AvatarPartCollection_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartCollection_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarPartCollection_1(AvatarPartCollection_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarPartCollection_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::BeatAvatarSDK
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1, "BeatSaber.BeatAvatarSDK", "AvatarPartCollection`1");
