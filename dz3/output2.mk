pottery: 
	@touch pottery
	@echo "pottery"
irrigation: pottery
	@touch irrigation
	@echo "irrigation"
writing: pottery
	@touch writing
	@echo "writing"
animal_husbandry: 
	@touch animal_husbandry
	@echo "animal_husbandry"
archery: animal_husbandry
	@touch archery
	@echo "archery"
mining: 
	@touch mining
	@echo "mining"
masonry: mining
	@touch masonry
	@echo "masonry"
bronze_working: mining
	@touch bronze_working
	@echo "bronze_working"
the_wheel: mining
	@touch the_wheel
	@echo "the_wheel"
apprenticeship: mining currency horseback_riding
	@touch apprenticeship
	@echo "apprenticeship"
sailing: 
	@touch sailing
	@echo "sailing"
celestial_navigation: sailing astrology
	@touch celestial_navigation
	@echo "celestial_navigation"
shipbuilding: sailing
	@touch shipbuilding
	@echo "shipbuilding"
astrology: 
	@touch astrology
	@echo "astrology"
drama_poetry: astrology irrigation masonry early_empire mysticism
	@touch drama_poetry
	@echo "drama_poetry"
theology: astrology mysticism drama_poetry
	@touch theology
	@echo "theology"
horseback_riding: archery
	@touch horseback_riding
	@echo "horseback_riding"
machinery: archery iron_working engineering
	@touch machinery
	@echo "machinery"
currency: writing foreign_trade
	@touch currency
	@echo "currency"
state_workforce: writing bronze_working craftsmanship
	@touch state_workforce
	@echo "state_workforce"
recorded_history: writing political_philosophy drama_poetry
	@touch recorded_history
	@echo "recorded_history"
construction: masonry the_wheel horseback_riding
	@touch construction
	@echo "construction"
engineering: masonry the_wheel
	@touch engineering
	@echo "engineering"
iron_working: bronze_working
	@touch iron_working
	@echo "iron_working"
mathematics: bronze_working celestial_navigation currency drama_poetry
	@touch mathematics
	@echo "mathematics"
military_training: bronze_working military_tradition games_recreation
	@touch military_training
	@echo "military_training"
cartography: celestial_navigation shipbuilding
	@touch cartography
	@echo "cartography"
medieval_faires: currency feudalism
	@touch medieval_faires
	@echo "medieval_faires"
guilds: currency feudalism civil_service
	@touch guilds
	@echo "guilds"
mercantilism: currency humanism
	@touch mercantilism
	@echo "mercantilism"
stirrups: horseback_riding feudalism
	@touch stirrups
	@echo "stirrups"
mass_production: shipbuilding machinery education
	@touch mass_production
	@echo "mass_production"
naval_tradition: shipbuilding defensive_tactics
	@touch naval_tradition
	@echo "naval_tradition"
military_tactics: mathematics
	@touch military_tactics
	@echo "military_tactics"
education: mathematics apprenticeship
	@touch education
	@echo "education"
military_engineering: construction engineering
	@touch military_engineering
	@echo "military_engineering"
castles: construction divine_right exploration
	@touch castles
	@echo "castles"
games_recreation: construction state_workforce
	@touch games_recreation
	@echo "games_recreation"
gunpowder: apprenticeship stirrups military_engineering
	@touch gunpowder
	@echo "gunpowder"
printing: machinery education
	@touch printing
	@echo "printing"
metal_casting: machinery gunpowder
	@touch metal_casting
	@echo "metal_casting"
banking: education stirrups guilds
	@touch banking
	@echo "banking"
astronomy: education
	@touch astronomy
	@echo "astronomy"
military_science: stirrups printing siege_tactics
	@touch military_science
	@echo "military_science"
siege_tactics: castles metal_casting
	@touch siege_tactics
	@echo "siege_tactics"
square_rigging: cartography gunpowder
	@touch square_rigging
	@echo "square_rigging"
exploration: cartography mercenaries medieval_faires
	@touch exploration
	@echo "exploration"
industrialization: mass_production square_rigging
	@touch industrialization
	@echo "industrialization"
scientific_theory: banking astronomy the_enlightenment
	@touch scientific_theory
	@echo "scientific_theory"
colonialism: astronomy mercantilism
	@touch colonialism
	@echo "colonialism"
ballistics: metal_casting siege_tactics
	@touch ballistics
	@echo "ballistics"
economics: metal_casting scientific_theory
	@touch economics
	@echo "economics"
scorched_earth: metal_casting nationalism
	@touch scorched_earth
	@echo "scorched_earth"
steam_power: industrialization
	@touch steam_power
	@echo "steam_power"
flight: industrialization scientific_theory economics
	@touch flight
	@echo "flight"
steel: industrialization rifling
	@touch steel
	@echo "steel"
class_struggle: industrialization ideology
	@touch class_struggle
	@echo "class_struggle"
sanitation: scientific_theory urbanization
	@touch sanitation
	@echo "sanitation"
rifling: ballistics military_science
	@touch rifling
	@echo "rifling"
totalitarianism: military_science ideology
	@touch totalitarianism
	@echo "totalitarianism"
electricity: steam_power mercantilism
	@touch electricity
	@echo "electricity"
radio: steam_power flight conservation
	@touch radio
	@echo "radio"
chemistry: sanitation
	@touch chemistry
	@echo "chemistry"
suffrage: sanitation ideology
	@touch suffrage
	@echo "suffrage"
replaceable_parts: economics
	@touch replaceable_parts
	@echo "replaceable_parts"
capitalism: economics mass_media
	@touch capitalism
	@echo "capitalism"
combined_arms: flight combustion
	@touch combined_arms
	@echo "combined_arms"
synthetic_materials: flight plastics
	@touch synthetic_materials
	@echo "synthetic_materials"
rapid_deployment: flight cold_war
	@touch rapid_deployment
	@echo "rapid_deployment"
advanced_ballistics: replaceable_parts steel electricity
	@touch advanced_ballistics
	@echo "advanced_ballistics"
combustion: steel natural_history
	@touch combustion
	@echo "combustion"
computers: electricity radio suffrage totalitarianism class_struggle
	@touch computers
	@echo "computers"
advanced_flight: radio
	@touch advanced_flight
	@echo "advanced_flight"
rocketry: radio chemistry
	@touch rocketry
	@echo "rocketry"
nanotechnology: radio composites
	@touch nanotechnology
	@echo "nanotechnology"
mass_media: radio urbanization
	@touch mass_media
	@echo "mass_media"
nuclear_program: chemistry ideology
	@touch nuclear_program
	@echo "nuclear_program"
plastics: combustion
	@touch plastics
	@echo "plastics"
satellites: advanced_flight rocketry
	@touch satellites
	@echo "satellites"
globalization: advanced_flight rapid_deployment space_race
	@touch globalization
	@echo "globalization"
guidance_systems: rocketry advanced_ballistics
	@touch guidance_systems
	@echo "guidance_systems"
space_race: rocketry cold_war
	@touch space_race
	@echo "space_race"
nuclear_fission: advanced_ballistics combined_arms
	@touch nuclear_fission
	@echo "nuclear_fission"
telecommunications: computers
	@touch telecommunications
	@echo "telecommunications"
robotics: computers globalization
	@touch robotics
	@echo "robotics"
lasers: nuclear_fission
	@touch lasers
	@echo "lasers"
cold_war: nuclear_fission ideology
	@touch cold_war
	@echo "cold_war"
composites: synthetic_materials
	@touch composites
	@echo "composites"
stealth_technology: synthetic_materials
	@touch stealth_technology
	@echo "stealth_technology"
social_media: telecommunications professional_sports space_race
	@touch social_media
	@echo "social_media"
nuclear_fusion: lasers
	@touch nuclear_fusion
	@echo "nuclear_fusion"
code_of_laws: 
	@touch code_of_laws
	@echo "code_of_laws"
craftsmanship: code_of_laws
	@touch craftsmanship
	@echo "craftsmanship"
foreign_trade: code_of_laws
	@touch foreign_trade
	@echo "foreign_trade"
military_tradition: craftsmanship
	@touch military_tradition
	@echo "military_tradition"
early_empire: foreign_trade
	@touch early_empire
	@echo "early_empire"
mysticism: foreign_trade
	@touch mysticism
	@echo "mysticism"
political_philosophy: state_workforce early_empire
	@touch political_philosophy
	@echo "political_philosophy"
defensive_tactics: games_recreation political_philosophy
	@touch defensive_tactics
	@echo "defensive_tactics"
humanism: drama_poetry medieval_faires
	@touch humanism
	@echo "humanism"
mercenaries: military_training feudalism
	@touch mercenaries
	@echo "mercenaries"
feudalism: defensive_tactics
	@touch feudalism
	@echo "feudalism"
civil_service: defensive_tactics recorded_history
	@touch civil_service
	@echo "civil_service"
divine_right: theology civil_service
	@touch divine_right
	@echo "divine_right"
diplomatic_service: guilds
	@touch diplomatic_service
	@echo "diplomatic_service"
reformed_church: guilds divine_right
	@touch reformed_church
	@echo "reformed_church"
the_enlightenment: humanism diplomatic_service
	@touch the_enlightenment
	@echo "the_enlightenment"
civil_engineering: mercantilism
	@touch civil_engineering
	@echo "civil_engineering"
nationalism: the_enlightenment
	@touch nationalism
	@echo "nationalism"
opera_ballet: the_enlightenment
	@touch opera_ballet
	@echo "opera_ballet"
natural_history: colonialism
	@touch natural_history
	@echo "natural_history"
urbanization: civil_engineering nationalism
	@touch urbanization
	@echo "urbanization"
conservation: natural_history urbanization
	@touch conservation
	@echo "conservation"
mobilization: urbanization
	@touch mobilization
	@echo "mobilization"
cultural_heritage: conservation
	@touch cultural_heritage
	@echo "cultural_heritage"
ideology: mass_media mobilization
	@touch ideology
	@echo "ideology"
professional_sports: ideology
	@touch professional_sports
	@echo "professional_sports"
