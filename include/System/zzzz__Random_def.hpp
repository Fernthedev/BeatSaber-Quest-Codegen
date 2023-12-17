#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
// Forward declare root types
namespace System {
class Random;
}
// Write type traits
MARK_REF_PTR_T(::System::Random);
// Type: System::Random
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2461))
// CS Name: ::System::Random*
class CORDL_TYPE Random : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field MBIG offset 0x0
static constexpr int32_t  MBIG{static_cast<int32_t>(0x7fffffff)};

/// @brief Field MSEED offset 0x0
static constexpr int32_t  MSEED{static_cast<int32_t>(0x9a4ec86)};

/// @brief Field MZ offset 0x0
static constexpr int32_t  MZ{static_cast<int32_t>(0x0)};

/// @brief Field _inext offset 0x10
 __declspec(property(get=__get__inext, put=__set__inext)) int32_t  _inext;

/// @brief Field _inextp offset 0x14
 __declspec(property(get=__get__inextp, put=__set__inextp)) int32_t  _inextp;

/// @brief Field _seedArray offset 0x18
 __declspec(property(get=__get__seedArray, put=__set__seedArray)) ::ArrayW<int32_t,::Array<int32_t>*>  _seedArray;

constexpr void __set__inext(int32_t  value) ;

constexpr int32_t& __get__inext() ;

constexpr int32_t const& __get__inext() const;

constexpr void __set__inextp(int32_t  value) ;

constexpr int32_t& __get__inextp() ;

constexpr int32_t const& __get__inextp() const;

constexpr void __set__seedArray(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__seedArray() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__seedArray() const;

static inline void setStaticF_t_threadRandom(::System::Random*  value) ;

static inline ::System::Random* getStaticF_t_threadRandom() ;

static inline void setStaticF_s_globalRandom(::System::Random*  value) ;

static inline ::System::Random* getStaticF_s_globalRandom() ;

static inline ::System::Random* New_ctor() ;

/// @brief Method .ctor addr 0x25bfa40 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::Random* New_ctor(int32_t  Seed) ;

/// @brief Method .ctor addr 0x25bfc5c size 0x1b0 virtual false final false
inline void _ctor(int32_t  Seed) ;

/// @brief Method Sample addr 0x25bfe0c size 0x20 virtual true final false
inline double_t Sample() ;

/// @brief Method InternalSample addr 0x25bfe2c size 0x90 virtual false final false
inline int32_t InternalSample() ;

/// @brief Method GenerateSeed addr 0x25bfa9c size 0x1c0 virtual false final false
static inline int32_t GenerateSeed() ;

/// @brief Method GenerateGlobalSeed addr 0x25bfebc size 0x24 virtual false final false
static inline int32_t GenerateGlobalSeed() ;

/// @brief Method Next addr 0x25bfee0 size 0x4 virtual true final false
inline int32_t Next() ;

/// @brief Method GetSampleForLargeRange addr 0x25bfee4 size 0x4c virtual false final false
inline double_t GetSampleForLargeRange() ;

/// @brief Method Next addr 0x25bff30 size 0x11c virtual true final false
inline int32_t Next(int32_t  minValue, int32_t  maxValue) ;

/// @brief Method Next addr 0x25c004c size 0xc8 virtual true final false
inline int32_t Next(int32_t  maxValue) ;

/// @brief Method NextDouble addr 0x25c0114 size 0xc virtual true final false
inline double_t NextDouble() ;

/// @brief Method NextBytes addr 0x25c0120 size 0xb0 virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Random(Random && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Random(Random const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Random()  = default;
public:


// Fields

// Static field t_threadRandom

// Static field s_globalRandom


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Random, 0x20>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Random);
DEFINE_IL2CPP_ARG_TYPE(::System::Random*, "System", "Random");
